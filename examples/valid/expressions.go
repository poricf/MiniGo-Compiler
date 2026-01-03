package calc;

import (
    "math"
    "fmt"
);

var x int = 10;
var y float64 = 3.14;
const pi float64 = 3.14159;

func compute(a int, b float64) float64 {
    var result float64;
    result = b + pi;
    return result;
}

func main() {
    var sum int;
    sum = 1 + 2 * 3 - 4 / 2;
    
    if sum > 5 {
        var flag bool = true;
    } else {
        var flag bool = false;
    }
    
    var i int;
    for i = 0; i < 10; i = i + 1 {
        sum = sum + i;
    }
    
    return;
}

