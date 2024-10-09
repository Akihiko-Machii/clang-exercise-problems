#include <stdio.h>

int main(void)
{
    int *p = NULL;
    int i = 20;

    p = &i;

    // フォーマット指定子%p
    printf("i:アドレス=%p 値=%d\n", (void *)&i, i);
    printf("p:アドレス=%p 値=%p 指す先の値=%d\n", (void *)&p, (void *)p, *p);

    // フォーマット指定子0x%x
    // printf("i:アドレス=0x%x 値=%d\n", &i, i);
    // printf("p:アドレス=0x%x 値=0x%x 指す先の値=%d\n", &p, p, *p);

    return 0;
}
