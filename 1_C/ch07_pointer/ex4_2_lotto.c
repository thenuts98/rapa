#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int* lotto);
void make_lotto(int* lotto);

int main(void){
    int lotto[6];

    make_lotto(lotto);
    sort(lotto);

    for(int idx = 0; idx < 6; idx++){
        printf("%d\t", lotto[idx]);
    }
}

void sort(int* lotto){
    for(int i = 0; i < 5; i++){
        int minIdx = i;
        for(int j = i+1; j < 6; j++){
            if(lotto[j] < lotto[minIdx]){
                minIdx = j;
            }
        }
        int temp = lotto[i];
        lotto[i] = lotto[minIdx];
        lotto[minIdx] = temp;
    }

}
void make_lotto(int* lotto){
    srand((unsigned int)time(NULL));

    int i = 0;
    while(i < 6){
        int temp = rand() % 45 + 1; 
        int duplicate_check = 1;

        for(int idx = 0; idx < i; idx++){
            if(temp == lotto[idx]){
                duplicate_check = 0;
            }
        }

        if(duplicate_check){
            lotto[i] = temp;
            i++;
        }
    } // while end
}
