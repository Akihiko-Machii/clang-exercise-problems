#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	long page_size = sysconf(_SC_PAGESIZE);
	
    	if (argc < 2) {
        printf("コマンドラインで./a.outの後にusageを指定してください\n");
        return 1;
    }

    FILE *fp;
    char filename[page_size];
    int c;

    snprintf(filename, sizeof(filename), "%s.txt", argv[1]);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("ファイルを開けませんでした\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);

    return 0;
}
