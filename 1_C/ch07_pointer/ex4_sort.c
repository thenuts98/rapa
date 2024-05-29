#include <stdio.h>

void sort(int* arr, int cnt);

int main(void){

    int lotto[6] = {41 ,1, 35, 20, 45, 10};

    printf("정렬 전 데이터 : \n");
    for(int idx = 0; idx < 6; idx++){
        printf("lotto[%d] : %d\n", idx, lotto[idx]);
    }
    sort(lotto, 6);
    printf("정렬 후 데이터 : \n");
    for(int idx = 0; idx < 6; idx++){
        printf("lotto[%d] : %d\n", idx, lotto[idx]);
    }
}

void sort(int* arr, int cnt){
    for(int i = 0; i < cnt-1; i++){
        int minIdx = i;
        for(int j = i+1; j < cnt; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}