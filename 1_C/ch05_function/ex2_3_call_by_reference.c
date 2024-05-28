#include <stdio.h>

void sum(int from, int to, int* tot);

int main(void)
{
    int from = 1, to = 100, tot;
    sum(from, to, &tot);
    printf("from %d to %d = %d", from, to, tot);
}

void sum(int from, int to, int* tot){
    *tot = 0;
    for(int i = from; i <= to; i++){
        *tot += i;
    }
}

