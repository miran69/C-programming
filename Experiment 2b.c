#include <stdio.h>

int main() {
    int start, end, i, sum = 0;

    // Input from user
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    // Loop through numbers
    for(i = start; i <= end; i++) {
        if(i % 2 != 0) {  // Check if number is odd
            sum = sum + i;
        }
    }

    printf("Sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
