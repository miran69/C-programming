/*Name: Khan Miran
UIN: 251M001
Class: F.E Mechanical
DIV: F */
#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // find length manually
    for (j = 0; str[j] != '\0'; j++);

    j = j - 1;  // last character index

    // check palindrome
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
