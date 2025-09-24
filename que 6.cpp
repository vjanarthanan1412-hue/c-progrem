#include <stdio.h>
int main() {
    double num1, num2, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    product = num1 * num2;
    if (product > 0) {
        printf("The product is positive.\n");
    } else if (product < 0) {
        printf("The product is negative.\n");
    } else {
        printf("The product is zero.\n");
    }
    return 0;
}