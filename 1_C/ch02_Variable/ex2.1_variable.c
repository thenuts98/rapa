#include <stdio.h>
// 변수 : 정수형 (int), 문자형(문자 '', 문자열 "")
// 주석 달기 : ctrl + k , c
// 주석 해제 : ctrl + k, u
/* 
간단한 설명
입출력 조건
날짜
이름
*/

int main(void)
{
    int age = 27;
    char gender = 'F';
    // char name[] = "제니";
    char * name = "제니";
    printf("안녕하세요, %d살(%c), %s입니다.\n", age, gender, name);
    printf("안녕하세요, %d살(%c), %s입니다.\n", age, gender, name);
    printf("안녕하세요, %d살(%c), %s입니다.\n", age, gender, name);    
}