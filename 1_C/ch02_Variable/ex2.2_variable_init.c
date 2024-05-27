#include <stdio.h>

int main(void)
{
    // 1. 자료형 변수명 = 초기값
    int num1 = 10; // 선언과 초기화를 한번에
    // 2. 자료형 변수명;
    int num2; // 변수 선언만
    num2 = 20;
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // 3. 같은 자료형의 변수를 여러개 선언
    int num3 = 3, num4 = 4, num5 = 5;
    printf("num3 = %d, num4 = %d, num5 = %d\n", num3, num4, num5);

    // 4. 같은 자료형의 선언만 여러번 하기
    int n1, n2, n3;
    n1 = 1, n2 = 2, n3 = 3;
    printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);

}