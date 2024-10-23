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

static int compare_asc(const void *n1, const void *n2);

int main(void)
{
    int i;

    qsort(dat, sizeof(dat) / sizeof(dat[0]), sizeof(DAT), compare_asc);

    for (i = 0; i < sizeof(dat) / sizeof(dat[0]); i++) {
        printf("%d, %s\n", dat[i].n, dat[i].s);
    }

    return 0;
}

/**
 * @brief 引数に与えられた構造体の値を比較し昇順に並び替える関数
 *
 * @param n1 比較する最初の要素を指すポインタ
 * @param n2 比較する2番目の要素を指すポインタ
 * @return n1がn2より大きい場合は正の値、
 *         n1がn2より小さい場合は負の値、
 *         同じ場合には0を返す
 */
static int compare_asc(const void *n1, const void *n2)
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
