#include <stdio.h>

int main(void)
{
    int *p = NULL;
    int i = 20;

    p = &i;

    printf("i:アドレス=0x%x 値=%d\n", &i, i);
    printf("p:アドレス=0x%x 値=0x%x 指す先の値=%d\n", &p, p, *p);

    return 0;
}
