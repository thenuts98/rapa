#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;
    char* str = "Hello";
    printf("a 변수의 주소 = %p, 변수값 : %d\n", &a, a); 
    printf("b 변수의 주소 = %p, 변수값 : %d\n", &b, b); 
    printf("str 변수의 주소 = %p, 문자열 주소 : %p, 문자열 내용 : %s\n", &str, str, str); 
    
    a = 10; b = 20; str = "HI";
    printf("a 변수의 주소 = %p, 변수값 : %d\n", &a, a); 
    printf("b 변수의 주소 = %p, 변수값 : %d\n", &b, b); 
    printf("str 변수의 주소 = %p, 문자열 주소 : %p, 문자열 내용 : %s\n", &str, str, str); 
    
}