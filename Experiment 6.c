/*Name: Khan Miran 
UIN: 251M001
class: F.E Mechanical
DIV: F */
#include <stdio.h>

void counter() {
    static int count = 0;   
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counter();
    counter();
    counter();
    counter();

    return 0;
}
