#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "abcdefghijklmnopqrstu";
    int len = strlen(str);

    printf("配列サイズ=%d 文字列長=%d\n1文字目は%c、最後の文字は%cです。\n",
           sizeof(str), len, str[0], str[len - 1]);

    return 0;
}
