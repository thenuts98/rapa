#include <stdio.h>
// 누적합은 55
// 1 + 2 + 3 + 4 + ..
int main(void)
{
    int i = 1;
    int tot = i;
    printf("%d", i++);
    while (i < 11)
    {
        tot += i;
        printf(" + %d", i++);

    }
    printf(" = %d\n", tot);
}