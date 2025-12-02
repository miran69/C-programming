/*Name: khan Miran 
UIN: 251M001
Class: F.E Mechanical 
DIV: F */
#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;

    // Taking array input
    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Point pointer to last element
    ptr = &arr[4];

    // Print in reverse order using pointer
    printf("Array in reverse order:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr--;  // move pointer backwards
    }

    return 0;
}
