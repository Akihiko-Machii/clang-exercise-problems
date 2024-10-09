#include <stdio.h>

#define SIZE 2

int main(void)
{
    char char_array[SIZE];
    short short_array[SIZE];
    int int_array[SIZE];
    long long_array[SIZE];
    int i;
    char *p1 = NULL;
    short *p2 = NULL;
    int *p3 = NULL;
    long *p4 = NULL;

    for (i = 0; i < SIZE; i++) {
        char_array[i] = 'A' + i;
        short_array[i] = i;
        int_array[i] = i;
        long_array[i] = i;
    }

    p1 = char_array;
    p2 = short_array;
    p3 = int_array;
    p4 = long_array;

    printf("char 配列=%d short 配列=%d int 配列=%d long 配列=%d\n",
           (void *)&char_array[1] - (void *)&char_array[0],
           (void *)&short_array[1] - (void *)&short_array[0],
           (void *)&int_array[1] - (void *)&int_array[0],
           (void *)&long_array[1] - (void *)&long_array[0]);
    printf("charポインタ=%d shortポインタ=%d intポインタ=%d "
           "longポインタ=%d\n",
           (void *)p1++ - (void *)p1, (void *)p2++ - (void *)p2,
           (void *)p3++ - (void *)p3, (void *)p4++ - (void *)p4);

    return 0;
}
