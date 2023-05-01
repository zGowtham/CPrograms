#include <stdio.h>

void func() 
{
    int a = 1; // automatic storage class
    static int b = 1; // static storage class
    register int c = 1; // register storage class

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    a++;
    b++;
    c++;
}

int main() {
    int i;

    for (i = 1; i <= 3; i++) {
        printf("Iteration %d:\n", i);
        func();
    }

    return 0;
}
