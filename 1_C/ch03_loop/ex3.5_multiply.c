#include <stdio.h>
// 출력을 원하는 구구단 수를 scanf를 통해 입력받는다.
int main(void){
    int base;
    printf("원하는 단수를 입력해주세요 : ");
    scanf("%d", &base);

    for(int i = 1; i < 10; i++)
    {
        printf("%d x %d = %d\n", base, i, base*i);
    }

}