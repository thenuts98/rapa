#include <stdio.h>
// 구조체 : 여러 형태의 데이터를 하나의 단일 자료형으로
struct student // 구조체를 정의
{
    // 내부 스코프에서 구조체의 멤버를 정의할 수 있음.
    int num;
    double grade;
};

int main(void){
    int i = 1;
    struct student s1;
    i = 1;
    s1.num = 101;
    s1.grade = 4.43;

    printf("학번 = %d, 학번 = %.2lf", s1.num, s1.grade);
}