#include <stdio.h>
// 점수를 입력받아 학점을 출력한다
// switch로
int main(void){
    int score = 0;
    printf("점수를 입력해주세요 : ");
    scanf("%d", &score);

    int temp = score;
    score /= 10;

    switch (score)
    {
    case 10:
        if(temp != 100) 
        {
            printf("유효한 숫자가 아닙니다.");
            break;
        }
    case 9:
        printf("A학점입니다.\n");
        break;
    case 8:
        printf("B학점입니다.\n");
        break;
    case 7:
        printf("C학점입니다.\n");
        break;
    case 6:
        printf("D학점입니다.\n");
        break;
    case 5:case 4:case 3:case 2:case 1:case 0:
        printf("F학점입니다.\n");
        break;
    default:
        printf("유효한 학점이 아닙니다.");
        break;
    }
}