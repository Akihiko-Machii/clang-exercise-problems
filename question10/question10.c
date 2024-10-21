#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DAT_t {
    int n;
    const char *s;
} DAT;

DAT dat[] = {
    {9, "A"},
    {2, "A"},
    {5, "AB"},
    {5, "AA"},
};

int compare_asc(const void *n1, const void *n2);

int main(void)
{
    int i;

    qsort(dat, sizeof(dat) / sizeof(dat[0]), sizeof(DAT), compare_asc);

    for (i = 0; i < sizeof(dat) / sizeof(dat[0]); i++) {
        printf("%d, %s\n", dat[i].n, dat[i].s);
    }

    return 0;
}

int compare_asc(const void *n1, const void *n2)
{
    DAT *p1 = (DAT *)n1;
    DAT *p2 = (DAT *)n2;

    if (p1->n > p2->n) {
        return 1;
    } else if (p1->n < p2->n) {
        return -1;
    } else {
        if (strcmp(p1->s, p2->s) > 0) {
            return 1;
        } else if (strcmp(p1->s, p2->s) < 0) {
            return -1;
        } else {
            0;
        }
    }
}
