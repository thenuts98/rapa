#include <stdio.h>
// 실수형 (float 4byte, double 8byte)
// 정수형 (int 4byte, long long 8byte)
int main(void)
{
    int age = 20;
    long long money = 2200000000L;
    float f = 3.14159265359F;
    double d = 3.14159265359;
    // 마지막 문자는 형식 지정용, 컴파일러가 자동으로 바꿔주지 않게끔
    printf("f = %.11f\n", f);
    printf("d = %.11lf\n", d);
    if (f == d)
    {
        printf("f와 d는 같다\n");
    }
    else
    {
        printf("f와 d는 다르다\n");
    }

    f = 10.1F;
    d = 10.1;
    printf("f = %.11f\n", f);
    printf("d = %.11lf\n", d);
    if (f == d)
    {
        printf("f와 d는 같다\n");
    }
    else
    {
        printf("f와 d는 다르다\n");
    }
}