#include <stdio.h>

int main(void)
{
  int *p;
  int i = 20;

  p = &i;

  printf("i:アドレス=0x%x 値=%d\np:アドレス=0x%x 値=0x%x 指す先の値=%d\n", &i, i, &p, p, *p);

  return 0;
}
