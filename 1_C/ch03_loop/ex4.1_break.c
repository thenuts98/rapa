#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", i);
        if(i == 3) break; // 반복문 탈출
    }
}