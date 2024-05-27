#include <stdio.h>
// 상수(불변한 변수) - 대부분 대문자
int main(void)
{
    const int YEAR = 1942;
    const double PI = 3.14159265359;
    // PI = 3.14
    int r = 3;
    printf("반지름이 %d인 원의 넓이는 %lf\n", r, PI * r * r);
    
}