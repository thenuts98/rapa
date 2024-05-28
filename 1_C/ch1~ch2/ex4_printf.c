#include <stdio.h>
/* 서식지정자 : %d, %f, %3lf, %c, %s, "F"
*/
int main()
{
    int num1 = 10;
    int num2 = 11;
    printf("두 수의 합 = %d\n", num1 + num2);
    // 정수형과 정수형의 사칙연산 결과는 정수형으로 나온다.
    printf("두 수의 평균 = %.2lf\n", (num1 + num2) / 2.0);
}