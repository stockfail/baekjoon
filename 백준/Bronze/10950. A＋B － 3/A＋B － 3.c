#include <stdio.h>
#include <stdint.h>

int main()
{
   uint16_t T, A, B;

   scanf("%hu", &T);
   while (T)
   {
     scanf("%hu %hu", &A, &B);
     printf("%hu\n", A +B);
     T--;
   }
   

    return 0;
}