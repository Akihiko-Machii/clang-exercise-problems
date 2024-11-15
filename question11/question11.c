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
    char buffer[page_size];

    snprintf(filename, sizeof(filename), "%s.txt", argv[1]);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("ファイルを開けませんでした\n");
        return 1;
    }


    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fp);

    return 0;
}
