//
// Created by crystal on 2019-09-03.
//

#include "HelloWorld.h"
#include <stdio.h>

int main() {
    printf("Hello World \n");

    int i;
    char c;

    int a, b;

    i = 10;
    c = 'A';

    int i2 =10;
    float f = 10.9f;
    double d = 9.8;

    const int i1 = 10;

    int g = 10;
    int h = g;


    int j = 0x1D;
    printf("%d  \n", j);
    printf("%x  \n", j);
    printf("%o  \n", j);

    int k = 10;
    printf("变量的地址为：%p \n", &k);

    char k1 = 'a';
    printf("变量的地址为：%p \n", &k1);

    int k2 = -10;
    printf("变量的地址为：%p \n", &k2);

    int a1 = 9;

    {
        int a1 = 10;

        printf("a1=%d \n", a1);
    }

    int a2;
    printf("%d \n", a2);

    int a3 = 10;
    double a4 = a3 + 9.5;
    printf("%f \n", a4);

    int a5 = (int) 10.5;
    printf("%d \n", a5);

    char a6 = 'c';
    printf("%c \n", a6);

    char a7 = 65;
    char a8 = 'A';
    printf("a7=%c a8=%c \n", a7, a8);

    char a9 = 6;
    char a10 = '6';
    printf("a9=%c a10=%c \n", a9, a10);
    printf("a9=%d a10=%d \n", a9, a10);

    int a11 = 1;
    a11++;
    printf("%d \n", a11);

    char url[] = "https://www.gnu.org/software/make/manual/make.html";
    printf("%s \n", url);


    int a12 = 10;
    int a13 = a12 + 5;
    printf("%d \n", a13);

    int a14 = 10-5;
    printf("%d \n", a14);
    int a15 = -10;
    printf("%d \n", a15);
    int a16 = 10*5;
    printf("%d \n", a16);

    double a17 = 10.0/4;
    double a18 = 10/4;
    printf("a17=%f, a18=%f \n", a17, a18);

    double a19 = (double)10 / 4;
    double a20 = 10 / (double)4;
    double a21 = (double)10 / (double)4;
    double a22 = (double) (10 / 4);
    printf("a19=%f, a20=%f, a21=%f, a22=%f \n", a19, a20, a21, a22);


    return 0;
}
