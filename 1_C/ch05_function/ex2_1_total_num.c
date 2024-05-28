#include <stdio.h>

int main(void)
{
    int a = 1, b = 100;
    int tot = 0;
    for(int i = a; i <= b; i++)
    {
        tot += i;
    }
    printf("total from %d to %d = %d", a, b, tot);
}