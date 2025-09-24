#include<stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    if (num >= 0 && num <= 9) {
        printf("The number is a single-digit number.\n");
    } else if (num >= 10 && num <= 99) {
        printf("The number is a two-digit number.\n");
    } else if (num >= 100 && num <= 999) {
        printf("The number is a three-digit number.\n");
    } else {
        printf("The number is either zero or has more than three digits.\n");
    }
    return 0;
}