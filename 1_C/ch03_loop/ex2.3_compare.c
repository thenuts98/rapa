#include <stdio.h>
#include <stdbool.h>
// 비교 연산자 : < <= > >= == , != 
// 삼항 연산자 : a ? b : c (a가 참이면 b, 거짓이면 c 실행)
int main(void)
{
    int n1 = 10, n2 = 5;
    bool result = n1 <= n2;
    printf("%d %s %d는 %s\n", n1, "<=", n2, result ? "True" : "False");
}