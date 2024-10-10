#include <stdio.h>

int static_counter(void);

int main(void)
{
    int i;
    for (i = 0; i < sizeof(i); i++) {
        printf("%d回目の呼び出し 値=%d\n", i + 1, static_counter());
    }

    return 0;
}

int static_counter(void)
{
    static int count = 0;

    return ++count;
}
