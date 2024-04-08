//explicit and implicit typecasting
#include <stdio.h>

int main() {
    int num_int = 10;
    float num_float = num_int; // Implicit type casting from int to float

    printf("Integer: %d\n", num_int);
    printf("Float: %f\n", num_float);

    return 0;
}
/*
Integer: 10
Float: 10.000000
  */
#include <stdio.h>

int main() {
    float num_float = 10.5;
    int num_int = (int)num_float; // Explicit type casting from float to int

    printf("Float: %f\n", num_float);
    printf("Integer: %d\n", num_int);

    return 0;
}
/*
Float: 10.500000
Integer: 10
*/
