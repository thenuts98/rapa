#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define POP 5   // ���� ģ���� �� 

int main(void){

    int arrHeight[POP]; // ���� ģ���� Ű
    char* arrName[] = {"������", "������","������","���밥","������"};  // ���� ģ���� �̸�

    int minIdx = 0, maxIdx = 0;
    int totHeight = 0;
    int minHeight = 0, maxHeight = 300;

    for(int idx = 0; idx < POP; idx++){
        printf("%s�� Ű��? : ", arrName[idx]);
        scanf("%d", &arrHeight[idx]);
        if(arrHeight[idx] > maxHeight || arrHeight[idx] < minHeight){
            printf("Ű�� �߸� �Է��ϼ̽��ϴ�.");
            idx--;
            continue;
        }else if(idx != 0){
            if(arrHeight[idx] > arrHeight[maxIdx]){
                maxIdx = idx;
            }else if(arrHeight[idx] > arrHeight[maxIdx]){
                minIdx = idx;
            }
        }
        totHeight += arrHeight[idx];
    }

    printf("���Ű : %.2lf\n", totHeight / (double)POP);
    printf("����� ģ�� %s�� Ű�� %d\n", arrName[maxIdx], arrHeight[maxIdx]);
    printf("�ִܽ� ģ�� %s�� Ű�� %d\n", arrName[minIdx], arrHeight[minIdx]);

}