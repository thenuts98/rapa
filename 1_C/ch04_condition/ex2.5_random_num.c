#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));
    int min = 1, max = 100;
    int num = rand() % max + 1; // 랜덤 변수
    //printf("%d\n",num);
    int chance = 5; // 기회
    int answer = 0; // 사용자의 답

    while(chance > 0){
        printf("%d부터 %d 사이의 정답을 입력하세요 : ", min, max);
        scanf("%d", &answer);
        if (answer < min || answer > max){
            printf("범위 밖의 값입니다.");
        }
        else if(answer == num){
            printf("정답입니다!\n");
            break;
        }
        else{
            if(num > answer){
                printf("UP\n");
                min = answer + 1;
            }
            else{
                printf("DOWN\n");
                max = answer - 1;
            }
        }
        chance -= 1;
    } // chance while 끝
    if(chance == 0){ 
       
        printf("기회를 소모하셨습니다.");
    }
} // main