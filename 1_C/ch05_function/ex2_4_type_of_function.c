#include <stdio.h>
void line(int cnt); // 함수 선언(반환값이 없는 함수)
void noArg(); // 함수 선언(매개변수가 없는 함수)

int main(void){
    line(40);
    noArg();
    line(50);
}

void line(int cnt){
    for(int i = 0; i < cnt; i++){
        printf("-");
    }
    printf("\n");
}

void noArg(){
    printf("반환값도, 매개변수도 없는 함수\n");
}
