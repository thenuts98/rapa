#include <stdio.h>

int* returnArray(int* ptr);

int main(void){
    int arr[] = {10,20,30};
    int* afterArr = returnArray(arr);

    printf("수정 전 : \n");
    for(int idx = 0; idx < 3; idx++){
        printf("arr[%d] = %d\n", idx, arr[idx]);
    }
    printf("수정 후 : \n");
    for(int idx = 0; idx < 3; idx++){
        printf("arr[%d] = %d\n", idx, afterArr[idx]);
    }
}

int* returnArray(int* ptr){
    static int resultArr[3];
    for(int idx = 0; idx < 3; idx++){
        resultArr[idx] = ptr[idx];
    }
    resultArr[1] = 99;
    return resultArr;
}