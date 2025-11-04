#include <stdio.h>
#include <stdint.h>

int main()
{
     uint16_t T;   
     uint8_t A, B; 
     scanf("%hu", &T);

    for (uint16_t i = 1; i <= T; i++) {
        scanf("%hhu %hhu", &A, &B);
        printf("Case #%hu: %hhu\n", i, (uint8_t)(A + B));
    }

    return 0;
}