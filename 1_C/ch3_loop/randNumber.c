#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 난수 발생 전 초기화 작업 필수
// rand() : 0 ~ 32367까지의 난수 발생
int main()
{
    srand((unsigned int)time(NULL));
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    
}