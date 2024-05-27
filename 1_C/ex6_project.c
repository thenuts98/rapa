#include <stdio.h>

int main(void)
{
    char gender[4], name[100];
    int kor, eng, math; 

    printf("성별을 입력하세요(남/여) : ");
    scanf_s("%s", gender, sizeof(gender));
    printf("\n이름을 입력하세요 : ");
    scanf_s("%s", name, sizeof(name));  
    printf("\n국어, 영어, 수학 점수를 입력해주세요. : ");
    scanf_s("%d %d %d", &kor, &eng, &math);

    printf("이름 : %s\n", name);
    printf("성별 : %s\n", gender);
    printf("국어 : %d\n", kor);
    printf("영어 : %d\n", eng);
    printf("수학 : %d\n", math);
    printf("합계 : %d\n", kor + eng + math);
    printf("평균 : %.2lf\n", (kor + eng + math)/3.0);
    

}