#include <stdio.h>
#include "main.h"

#ifndef TEST
int main() {

    printf("Rule Breaker!!!\n");
    printf("5 + 2 = %d\n", addNumber(5, 2));
    printf("%d\n", getTriangleType(3, 4, 5));

    int a;
    printf("輸入石頭數量 : ");
    scanf(" %d",&a);
    dolo(a);
    if(dolo(a) == -1)
    printf("滾吧你這負債的窮逼");
    else
    printf("你共可以抽 %d次(5石一抽)");
    return 0;
}
#endif // TEST

int addNumber(int a, int b) {
    return a + b;
}

int getTriangleType(int a, int b, int c) {
    if (a > b && a > c) {
        int temp = c; c = a; a = temp;
    }
    else if (b > a && b > c) {
        int temp = c; c = b; b = temp;
    }

    if (a + b <= c) {
        return -2;
    }
    else if (a * a + b * b == c * c) {
        return 0;
    }
    else if (a * a + b * b > c * c) {
        return 1;
    }
    else if (a * a + b * b < c * c) {
        return -1;
    }
    return -3;
}

int dolo(int a) {
    if (a < 0) {
        return -1;
    }
    else  {
        return a/5;
    }
}
