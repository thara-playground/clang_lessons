#include <stdio.h>

// プロトタイプ宣言
float getMax(float a, float b);
void sayHi(void);


void f(void) {
    static int a = 0; // 静的変数
    a++;
    printf("a:%d\n", a);
}

int main(void) {

    int x = 10;
    float y = 5.2;
    char c = 'A';

    printf("hello world!\n");
    printf("x = %d, y = %f, c = %c\n", x, y, c);

    x = 10 % 3;
    printf("%d\n", x);
    x += 3;
    printf("%d\n", x);
    x++;
    printf("%d\n", x);

    int score = 55;

    if (score >= 60) {
        printf("OK!\n");
    } else if (score >= 50) {
        printf("so so...\n");
    } else {
        printf("NG!n");
    }

    int rank = 20;

    switch (rank) {
        case 1:
            printf("Gold!\n");
            break;
        case 2:
            printf("Silver!\n");
            break;
        case 3:
            printf("Bronze!\n");
            break;
        default:
            printf("No medal...\n");
            break;
    }

    int m = 20;
    while (m < 10) {
        printf("m: %d\n", m);
        m++;
    }

    int n = 20;
    do {
        printf("n: %d\n", n);
        n++;
    } while (n < 10);

    for (m =0; m < 10; m++) {
        if (m == 3) {
            continue;
        }
        if (m == 8) {
            break;
        }
        printf("m: %d\n", m);
    }

    float result;
    result = getMax(2.3, 5.2);
    printf("%f\n", result);

    sayHi();

    f();
    f();
    f();

    int sales[3];
    sales[0] = 200;
    sales[1] = 400;
    sales[2] = 300;

    int sales2[] = {200, 400, 300};

    printf("%d\n", sales[1]);
    printf("%d\n", sales2[1]);

    /* char s[] = {'a', 'b', 'c', '\0'}; */
    char s[] = "abc";
    /* char s[4] = "abc"; */

    printf("%c\n", s[1]);

    return 0;
}


float getMax(float a, float b) {
    return (a >= b) ? a : b;
}

void sayHi(void) {
    printf("hi!\n");
}
