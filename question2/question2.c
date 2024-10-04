#include <stdio.h>

int main(void)
{
    printf("char=%05d short=%05d int=%05d long=%05d float=%05d double=%05d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(float), sizeof(double));

    return 0;
}
