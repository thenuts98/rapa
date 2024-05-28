#include <stdio.h>

int main(void)
{
    int floor = 0;
    printf("몇 층으로 쌓을까요? : ");
    scanf("%d", &floor);

    for(int i = 0; i < floor; i++)
    {
        for(int j = 0; j < floor * 2 + 1; j++)
        {
            if((j >= (floor -i)) && (j <= (floor +i)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}