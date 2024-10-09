#include <stdio.h>

#define SIZE 2

int main(void)
{
    char charArray[SIZE];
    short shortArray[SIZE];
    int intArray[SIZE];
    long longArray[SIZE];
    int i;
    char *p1 = NULL;
    short *p2 = NULL;
    int *p3 = NULL;
    long *p4 = NULL;

    for (i = 0; i < SIZE; i++) {
        charArray[i] = 'A' + i;
        shortArray[i] = i;
        intArray[i] = i;
        longArray[i] = i;
    }

    p1 = charArray;
    p2 = shortArray;
    p3 = intArray;
    p4 = longArray;

    printf("char 配列=%d short 配列=%d int 配列=%d long 配列=%d\n",
           (void *)&charArray[1] - (void *)&charArray[0],
           (void *)&shortArray[1] - (void *)&shortArray[0],
           (void *)&intArray[1] - (void *)&intArray[0],
           (void *)&longArray[1] - (void *)&longArray[0]);
    printf("charポインタ=%d shortポインタ=%d intポインタ=%d "
           "longポインタ=%d\n",
           (void *)p1++ - (void *)p1, (void *)p2++ - (void *)p2,
           (void *)p3++ - (void *)p3, (void *)p4++ - (void *)p4);

    return 0;
}
