#include <stdio.h>

void swap_int(int *a, int *b);

int main(void)
{
    int a = 1, b = 2;

    swap_int(&a, &b);
    printf("a: %d\nb: %d\n", a, b);

    return 0;
}

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

