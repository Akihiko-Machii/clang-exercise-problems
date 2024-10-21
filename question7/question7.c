#include <stdio.h>

int static_counter(void);

int main(void)
{
    int i;
    for (i = 0; i < sizeof(i); i++) {
        int counter_value = static_counter();
        printf("%d回目の呼び出し 値=%d\n", i + 1, counter_value);
    }

    return 0;
}

/**
 * @brief カウント数（整数）を加算する関数
 *
 * @return static int countをインクリメントした値
 */
int static_counter(void)
{
    static int count = 0;

    return ++count;
}
