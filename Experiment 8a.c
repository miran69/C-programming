/*Name: Khan miran 
UIN: 251M001
class: F.E Mechanical
Div: F */
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // input string

    // counting characters manually
    while (str[length] != '\0') {
        length++;
    }

    // -1 because fgets adds '\n' before '\0'
    length = length - 1;

    printf("Length of the string = %d\n", length);

    return 0;
}
