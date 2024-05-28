#include <stdio.h>
// 비트연산자 : &(and), |(or), ^(xor; 같으면 0 다르면 1)
int main(void)
{
    int n1 = 10; // 1010
    int n2 = 6;  // 0110
    // n1 & n2 :    0010 (2)
    // n1 | n2 :    1110 (14)
    // n1 ^ n2 :    1100 (12)
    printf("n1&n2 = %d\n", n1&n2);
    printf("n1|n2 = %d\n", n1|n2);
    printf("n1^n2 = %d\n", n1^n2);
    printf("n2 << 1 = %d\n", n2 << 1);
    printf("n2 >> 1 = %d\n", n2 >> 1);
}