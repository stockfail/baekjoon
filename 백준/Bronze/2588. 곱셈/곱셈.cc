#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t A, B;
    
    scanf("%hu %hu", &A, &B);
    printf("%hu\n", (A * (B % 10)));
    printf("%hu\n", (A * ((B/10)%10)));
    printf("%hu\n", (A * (B/100)));
    printf("%u", (A * B));

    return 0;
}