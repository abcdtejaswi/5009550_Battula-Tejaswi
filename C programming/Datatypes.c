#include <stdio.h>

int main() {
    int a = 25;
    float b = 3.75;

    float result = a + b;         // implicit conversion
    int casted = (int)b;          // explicit type casting

    printf("Result: %.2f, Casted value: %d\n", result, casted);
    return 0;
}
