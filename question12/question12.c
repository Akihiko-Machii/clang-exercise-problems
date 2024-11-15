#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf("コマンドラインで./a.outの後にusageを指定してください\n");
    return 1;
  }

  FILE *fp;
  char filename[256];
  int c;
  int newline = 1;

  snprintf(filename, sizeof(filename), "%s.txt", argv[1]);
  fp = fopen(filename, "r");

  if (fp == NULL)
  {
    printf("ファイルを開けませんでした\n");
    return 1;
  }

  while ((c = fgetc(fp)) != EOF)
  {
    if (newline)
    {
      printf("ADDRESS: ");
      newline = 0;
    }

    if (c == '\n')
    {
      printf("\n");
      newline = 1;
    }
    else
    {

      printf("%02X", (unsigned char)c);
    }
  }

   if (fclose(fp) != 0)
   {
     printf("ファイルを閉じれませんでした\n");
     return 1;
   }

  return 0;
}

