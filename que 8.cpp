#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    int ascii_value = ch;
    if (ascii_value % 2 == 0) {
        printf("The ASCII value of '%c' (%d) is even.\n", ch, ascii_value);
    } else {
        printf("The ASCII value of '%c' (%d) is odd.\n", ch, ascii_value);
    }
    return 0;
}