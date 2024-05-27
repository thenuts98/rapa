#include <stdio.h>

int main(void)
{
    char gender, name[100];
    printf("성별은 ? : ");
    scanf("%c", &gender); // &gender = gender 변수의 주소값
    printf("이름은 ? : ");
    scanf("%s", name, sizeof(name));
    printf("입력한 성별은 %c, 입력한 이름은 %s입니다.", gender, name);
    
}