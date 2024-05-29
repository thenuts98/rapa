#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;
    printf("a 변수의 주소값 : %p\t값 : %d\n", &a, a);
    printf("b 변수의 주소값 : %p\t값 : %d\n", &b, b);
    
    int* pointer = &a;
    printf("pointer변수가 가르키는 주소 : %p\t값 : %d\n", pointer, *pointer);
    pointer = &b;
    printf("pointer변수가 가르키는 주소 : %p\t값 : %d\n", pointer, *pointer);

}
