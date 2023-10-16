#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int mydiv(int a, int b) {
    return a / b;
}

int mymod(int a, int b) {
    return a % b;
}

int main() {
    int x = 10;
    int y = 5;

    printf("Sum: %d\n", add(x, y));
    printf("Difference: %d\n", sub(x, y));
    printf("Product: %d\n", mul(x, y));
    printf("Division: %d\n", mydiv(x, y));
    printf("Modulus: %d\n", mymod(x, y));

    return 0;
}

