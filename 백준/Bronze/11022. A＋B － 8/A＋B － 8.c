#include <stdio.h>
#include <stdint.h>

int main()
{
   uint16_t T, A, B;
   scanf("%hu", &T);
   for (uint16_t i = 1; i <= T; i++)
   {
    scanf("%hu %hu", &A, &B);
    printf("Case #%hu: %hu + %hu = %hu\n", i, A, B, A+B);
   }
   
   

    return 0;
}