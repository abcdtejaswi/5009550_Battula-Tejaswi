#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    // Ternary operator used here
    (num % 2 == 0) ? printf("Even Number") : printf("Odd Number");

    return 0;
}
