#include <stdio.h>
//  이름(빈문자 불포함), 주소(빈문자 포함)을 입력받기
/*  scanf("%s", 변수, 입력받을 byte 수)
    whilte space가 오면 그 이전 버퍼의 내용을 return한다.
    따라서 gets를 사용한다.
    gets(변수) : '\n' 이전까지만 인식하고 그 뒤의 버퍼 내용은 버린다. 
*/
int main(void){
    char name[128];     // 이름 저장할 공간
    char address[512];  // 주소 저장할 공간

    printf("이름 >> ");
    scanf("%s", name, sizeof(name));
    printf("주소 >> ");
    //scanf("%s", address, sizeof(address));
    gets(address); // 앞에서 들어간 개행문자를 한번 날리는 용도
    gets(address);
    printf("이름 : %s\n주소 : %s", name, address);

    gets(address);
}