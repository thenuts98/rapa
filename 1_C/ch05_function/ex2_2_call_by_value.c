#include <stdio.h>

int sum(int from, int to); // 함수 선언

int main(void)
{
    int a = 1, b = 100;
    int tot = sum(a, b);
    printf("total from %d to %d = %d\n", a, b, tot);
}

int sum(int from, int to){ // 함수 정의
    int result = 0;
    for(int i = from; i <= to; i++){
        result += i;
    }
    return result; 
}