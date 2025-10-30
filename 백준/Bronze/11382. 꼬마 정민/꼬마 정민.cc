#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t A, B, C;
    
    scanf("%lu %lu %lu", &A, &B, &C);
    printf("%lu", (A + B + C));

    return 0;
}