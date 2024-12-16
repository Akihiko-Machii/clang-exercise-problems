#include <stdio.h>

#define SUCCESS 0
#define FAILURE 1
#define FILENAME_SIZE 256

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("コマンドラインで./a.outの後にusageを指定してください\n");
        return FAILURE;
    }

    FILE *fp;
    char filename[FILENAME_SIZE];
    int c;
    int newline = 1;

    snprintf(filename, sizeof(filename), "%s.txt", argv[1]);
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("ファイルを開けませんでした\n");
        return FAILURE;
    }

    while ((c = fgetc(fp)) != EOF) {
        if (newline) {
            printf("ADDRESS: ");
            newline = 0;
        }

        if (c == '\n') {
            printf("\n");
            newline = 1;
        } else {
            printf("%02X", (unsigned char)c);
        }
    }

    int close_result = fclose(fp);
    if (close_result != 0) {
        printf("ファイルを閉じれませんでした\n");
        return FAILURE;
    }

    return SUCCESS;
}
