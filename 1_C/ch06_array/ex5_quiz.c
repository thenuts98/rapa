#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define POP 5   // 동물 친구들 수 

int main(void){

    int arrHeight[POP]; // 동물 친구들 키
    char* arrName[] = {"유수민", "김현식","땅땅이","새대갈","슘당이"};  // 동물 친구들 이름

    int minIdx = 0, maxIdx = 0;
    int totHeight = 0;
    int minHeight = 0, maxHeight = 300;

    for(int idx = 0; idx < POP; idx++){
        printf("%s의 키는? : ", arrName[idx]);
        scanf("%d", &arrHeight[idx]);
        if(arrHeight[idx] > maxHeight || arrHeight[idx] < minHeight){
            printf("키를 잘못 입력하셨습니다.");
            idx--;
            continue;
        }else if(idx != 0){
            if(arrHeight[idx] > arrHeight[maxIdx]){
                maxIdx = idx;
            }else if(arrHeight[idx] > arrHeight[maxIdx]){
                minIdx = idx;
            }
        }
        totHeight += arrHeight[idx];
    }

    printf("평균키 : %.2lf\n", totHeight / (double)POP);
    printf("최장신 친구 %s의 키는 %d\n", arrName[maxIdx], arrHeight[maxIdx]);
    printf("최단신 친구 %s의 키는 %d\n", arrName[minIdx], arrHeight[minIdx]);

}