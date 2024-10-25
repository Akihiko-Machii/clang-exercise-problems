#include <stdio.h>

static void swap_int(int *a, int *b);

int main(void)
{
    int a = 1, b = 2;

    swap_int(&a, &b);
    printf("a: %d\nb: %d\n", a, b);

    return 0;
}

/**
 * @brief 引数に与えられた値を入れ替える関数
 *
 * @ param a intの値
 * @ param b intの値
 * @ return 引数aとbを入れ替えた値
 */
static void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
