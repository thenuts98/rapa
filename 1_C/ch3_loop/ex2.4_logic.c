#include <stdio.h>
// 논리연산자 : && (and), || (or), !(not)
int main(void)
{
    int i = 1 , j = 10, h = 10;
    // &&연산의 경우 좌항이 false인 경우 우항은 실행하지 않고 false를 출력한다.
    printf("(i > j) && (++j>h) = %s\n", ((i>j) && (++j>h)) ? "True" : "False");
    printf("j = %d\n", j); 
    // ||연산의 경우 좌항이 true인 경우 우항을 실행하지 않고 true를 출력한다
    printf("(i < j) || (++j>h) = %s\n", ((i<j) || (++j>h)) ? "True" : "False");
    printf("j = %d\n", j);
}