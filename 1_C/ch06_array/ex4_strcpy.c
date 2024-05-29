#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int i = 10;
    int j = i;
    i = 99;
    printf("i = %d\tj = %d\n", i, j);

    char* str1 = "Hello";
    char* str2 = str1; // str1의 주소를 str2에 할당
    strcpy(str2, str1);   // 깊은 복사
     
    str1 = "Hi";
    printf("str1 = %s\tstr2 = %s\n", str1, str2);
}