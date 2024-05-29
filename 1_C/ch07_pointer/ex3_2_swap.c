#include <stdio.h>

void swap(int* a, int* b); // 함수 선언

int main(void){
    int a = 10, b = 20;
    printf("swap() 호출 전 a 주소 : %p\t값: %d, b 주소 : %p\tb 값 = %d\n", &a, a, &b, b);
    swap(&a, &b); // 함수 호출
    printf("swap() 호출 후 a 주소 : %p\t값: %d, b 주소 : %p\tb 값 = %d\n", &a, a, &b, b);

}
/*
void swap(int a, int b){ // 함수 구현, 정의
    printf("함수 안 a 주소 : %p\t값: %d, b 주소 : %p\tb 값 = %d\n", &a, a, &b, b);
    int temp = a;
    a = b;
    b = temp;
    printf("함수 안 a 주소 : %p\t값: %d, b 주소 : %p\tb 값 = %d\n", &a, a, &b, b);
}
*/
void swap(int* a, int* b){
    printf("함수 안 a 주소 : %p\t값: %d, b 주소 : %p\tb 값 = %d\n", a, *a, b, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("함수 안 a 주소 : %p\t값: %d, b 주소 : %p\tb 값 = %d\n", a, *a, b, *b);
}

