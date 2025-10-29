#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t A, B, C;
    
    scanf("%hu %hu %hu", &A, &B, &C);
    printf("%hu\n", (A+B)%C);
    printf("%hu\n", ((A%C) + (B%C))%C);
    printf("%hu\n", (A*B)%C);
    printf("%hu\n", ((A%C) * (B%C))%C);

    return 0;
}