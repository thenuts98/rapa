#include <stdio.h>
// 배열 : 동일 자료형의 조합
int main(void){
    // 배열 선언
    int subway[10] = {30, 40, 50};
    for(int idx = 0; idx < 10; idx++){
        printf("subway[%d] = %d\n", idx, subway[idx]);
    }
}
