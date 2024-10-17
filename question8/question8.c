#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[32];
    char list[256];
    char result[1024] = "";
    int count = 0;

    printf("パラメータを入力してください\n終了する場合は何も入力せずエンターキ"
           "ーを押してください\n");

    while (1) {
        if (fgets(str, sizeof(str), stdin) != NULL) {
            if (strcmp(str, "\n") == 0) {
                break;
            }

            count++;
            snprintf(list, sizeof(list), "%d: %s", count, str);
            strcat(result, list);
        } else {
            break;
        }
    }

    printf("%s", result);

    return 0;
}

