#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf("コマンドラインで./a.outの後にusageを指定してください\n");
    return 1;
  }

  char filename[SIZE];
  snprintf(filename, sizeof(filename), "%s.txt", argv[1]);

  FILE *fp = fopen(filename, "r");

  if (fp == NULL)
  {
    printf("ファイルを開けませんでした\n");
    return 1;
  }

  int c;
  printf("usage: ");

  while ((c = fgetc(fp)) != EOF)
  {
    putchar(c);
  }

  fclose(fp);

  return 0;
}

