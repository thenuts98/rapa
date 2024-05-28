#include <stdio.h>
// 반복문 : for(특정 횟수 반복), while(특정 조건 반복) do~while(한번 시행 후 조건 만족시 반복)
int main(void)
{
    int i = 0;
    while(i < 10)
    {
        printf("%d, Hello, World\n", i++);
    }

}