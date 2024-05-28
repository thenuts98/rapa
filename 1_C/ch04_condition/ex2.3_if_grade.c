#include <stdio.h>
// 점수를 입력받아 학점을 출력한다
// if로
int main(void){
    int score = 0;
    printf("점수를 입력해주세요 : ");
    scanf("%d", &score);

    if(90 <= score && score <= 100){
        printf("A학점\n");
    }else if(80 <= score && score < 90){
        printf("B학점\n");
    }else if(70 <= score && score < 80){
        printf("C학점\n");
    }else if(60 <= score && score < 70){
        printf("D학점\n");
    }else if(0 <= score && score < 60){
        printf("F학점\n");
    }else{
        printf("유효한 점수가 아닙니다");
    }
}