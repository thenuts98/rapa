#include <stdio.h>

int main(void){
    int a = 1, b = 2;
    int* pointer;
    pointer = &a;
    *pointer *= 3;
    pointer = &b;
    *pointer *= 3;
    printf("a 변수의 값 : %d\n", a);
    printf("b 변수의 값 : %d\n", b);
    printf("pointer 변수가 가르키는 주소: %p, 값 : %d\n", pointer, *pointer);
    printf("a 변수의 주소 : %p\n", &a);
    printf("b 변수의 주소 : %p\n", &b);

}