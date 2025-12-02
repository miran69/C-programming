/*Name: Khan miran 
UIN: 251M001
Class: F.E Mechanical 
DIV: F */
#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    // Taking input
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Assigning addresses to pointers
    p1 = &a;
    p2 = &b;

    // Adding using pointers
    int sum = *p1 + *p2;

    printf("Sum = %d\n", sum);

    return 0;
}
