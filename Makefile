# Makefile for Mini-Go Compiler
# Iteration 1: Lexical and Syntax Analysis

CC = gcc
CFLAGS = -Wall -Wextra -g
FLEX = flex
BISON = bison

# Directories
SRC_DIR = src
BUILD_DIR = build
EXAMPLES_DIR = examples

# Source files
LEXER_SRC = $(SRC_DIR)/lexer.l
PARSER_SRC = $(SRC_DIR)/parser.y
C_SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/error.c $(SRC_DIR)/ast.c

# Generated files
LEXER_C = $(BUILD_DIR)/lex.yy.c
PARSER_C = $(BUILD_DIR)/parser.tab.c
PARSER_H = $(BUILD_DIR)/parser.tab.h

# Object files
OBJECTS = $(BUILD_DIR)/lex.yy.o $(BUILD_DIR)/parser.tab.o \
          $(BUILD_DIR)/main.o $(BUILD_DIR)/error.o $(BUILD_DIR)/ast.o

# Target executable
TARGET = $(BUILD_DIR)/minigo

.PHONY: all clean test examples

all: $(TARGET)

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Generate lexer from Flex
$(LEXER_C): $(LEXER_SRC) $(PARSER_H) | $(BUILD_DIR)
	$(FLEX) -o $(LEXER_C) $(LEXER_SRC)

# Generate parser from Bison
$(PARSER_C) $(PARSER_H): $(PARSER_SRC) | $(BUILD_DIR)
	$(BISON) -d -o $(PARSER_C) $(PARSER_SRC)

# Compile object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(SRC_DIR) -I$(BUILD_DIR) -c $< -o $@

$(BUILD_DIR)/lex.yy.o: $(LEXER_C) $(PARSER_H) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(SRC_DIR) -I$(BUILD_DIR) -c $(LEXER_C) -o $@

$(BUILD_DIR)/parser.tab.o: $(PARSER_C) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(SRC_DIR) -I$(BUILD_DIR) -c $(PARSER_C) -o $@

# Link executable
$(TARGET): $(OBJECTS) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET) -lfl
	@echo "Build successful: $(TARGET)"

# Test with example programs
test: $(TARGET)
	@echo "Testing valid programs..."
	@for file in $(EXAMPLES_DIR)/valid/*.go; do \
		echo "Testing: $$file"; \
		$(TARGET) $$file || exit 1; \
	done
	@echo "Testing invalid programs (should fail)..."
	@for file in $(EXAMPLES_DIR)/invalid/*.go; do \
		echo "Testing: $$file"; \
		$(TARGET) $$file && exit 1 || true; \
	done
	@echo "All tests completed."

# Create example directory structure
examples:
	mkdir -p $(EXAMPLES_DIR)/valid $(EXAMPLES_DIR)/invalid

clean:
	rm -rf $(BUILD_DIR)
	@echo "Clean complete."

