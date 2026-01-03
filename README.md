# Mini-Go Compiler

A compiler for a simplified subset of the Go programming language, implemented as part of a compiler construction course.

## Project Status

**Iteration 1: Lexical and Syntax Analysis** - 

This iteration implements:
- Lexical analyzer using Flex
- Syntax analyzer using Bison
- Error handling with line number reporting

## Building

```bash
make
```

This will create the compiler executable at `build/minigo`.

## Usage

```bash
./build/minigo <file.go>
```

Or read from stdin:
```bash
./build/minigo
```

## Project Structure

```
MiniGo-Compiler/
├── src/
│   ├── lexer.l          # Flex lexer definition
│   ├── parser.y         # Bison parser definition
│   ├── main.c           # Entry point
│   ├── error.h/c        # Error handling module
│   └── ast.h/c          # AST placeholder 
├── examples/
│   ├── valid/           # Valid Mini-Go programs
│   └── invalid/         # Invalid programs for error testing
├── build/               # Build output directory
├── Makefile             # Build configuration
```

## Example Programs

Valid examples are in `examples/valid/`:
- `hello.go` - Simple program with package, import, and function
- `simple.go` - Function with parameters and return
- `fibonacci.go` - Recursive function example
- `expressions.go` - Complex expressions and control flow

Invalid examples are in `examples/invalid/`:
- `missing_semicolon.go` - Syntax error: missing semicolon
- `missing_brace.go` - Syntax error: missing closing brace
- `invalid_char.go` - Lexical error: invalid character
- `malformed_expr.go` - Syntax error: malformed expression

## Testing

Run all test cases:
```bash
make test
```

## Language Features (Iteration 1)

Mini-Go supports:
- Package declarations
- Import statements
- Function definitions with parameters and return types
- Variable and constant declarations
- Basic types: `int`, `float64`, `string`, `bool`
- Control flow: `if`, `else`, `for`
- Expressions with operator precedence
- Function calls
- Comments (single-line `//` and multi-line `/* */`)

## Future Iterations

- **Iteration 2**: Abstract Syntax Tree construction
- **Iteration 3**: Symbol table and scope management
- **Iteration 4**: Semantic analysis
- **Iteration 5**: Intermediate representation
- **Iteration 6**: Optimization
- **Iteration 7**: Code generation

## Requirements

- Flex (lexical analyzer generator)
- Bison (parser generator)
- GCC (C compiler)
- Make

## Notes

- The parser has some shift/reduce conflicts (65 warnings) which are common in expression grammars. The parser still functions correctly.
- Error messages include line numbers for both lexical and syntax errors.

# MiniGo-Compiler
