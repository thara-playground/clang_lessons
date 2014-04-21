#include <stdio.h>

void f(long *pa) {
    *pa += 100;
    printf("%ld\n", *pa);
}

void swap(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(void) {

    int a;
    a = 10;

    int *pa;
    pa = &a;

    printf("%d\n", *pa);

    long l = 1000;
    f(&l);

    int b = 5;
    int c = 10;
    swap(&b, &c);
    printf("b:%d, c:%d\n", b, c);

    return 0;
}
