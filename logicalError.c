#include <stdio.h>

int main() {
    int a = 10, b = 5, sum;
    // Incorrect logic: subtracting instead of adding
    sum = a - b;
    printf("Sum: %d\n", sum);
    return 0;
}
//sum is 5 instead of 15, the written logic is wrong
//here the code runs normally, but doesnt satisfy the required output
