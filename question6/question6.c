#include <stddef.h>
#include <stdio.h>

typedef struct SAMPLE_t {
    char m1;
    short m2;
    char m3;
    long m4;
    char m5;
    void *m6;
} SAMPLE_t;

int main(void)
{
    SAMPLE_t sample;

    printf("構造体のサイズ=%d メンバの合計サイズ=%d\nchar m1 オフセット=%d "
           "サイズ=%d\nshort m2 オフセット=%d サイズ=%d\nchar m3 オフセット=%d "
           "サイズ=%d\nlong m4 オフセット=%d サイズ=%d\nchar m5 オフセット=%d "
           "サイズ=%d\nvoid* m6 オフセット=%d サイズ=%d\n",
           sizeof(SAMPLE_t),
           (sizeof(sample.m1) + sizeof(sample.m2) + sizeof(sample.m3) +
            sizeof(sample.m4) + sizeof(sample.m5) + sizeof(sample.m6)),
           offsetof(SAMPLE_t, m1), sizeof(sample.m1), offsetof(SAMPLE_t, m2),
           sizeof(sample.m2), offsetof(SAMPLE_t, m3), sizeof(sample.m3),
           offsetof(SAMPLE_t, m4), sizeof(sample.m4), offsetof(SAMPLE_t, m5),
           sizeof(sample.m5), offsetof(SAMPLE_t, m6), sizeof(sample.m6));

    return 0;
}
