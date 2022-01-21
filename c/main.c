#include <stdio.h>

int main(void) {
    int a = 23;
    int b = -23;
    int c = 5;
    int d = -5;

    printf("%d `%` %d = %d\n", a, c, a%c);
    printf("%d `%` %d = %d\n", a, d, a%d);
    printf("%d `%` %d = %d\n", b, c, b%c);
    printf("%d `%` %d = %d\n", b, d, b%d);
}