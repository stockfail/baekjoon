#include <stdio.h>
#include <stdint.h>

int main()
{
   uint16_t H, M, T;

   scanf("%hu %hu %hu", &H, &M, &T);

   if ((M + (T%60)) >= 60)
   {
        M = M + ((T%60)- 60);
        H += 1;
        H = ((H + (T/60)) >= 24) ? (H + ((T/60) - 24)) : (H + (T/60));
   }
   else 
   {
        M = M + (T%60);
        H = ((H + (T/60)) >= 24) ? (H + ((T/60) - 24)) : (H + (T/60));
   }
   printf("%hu %hu", H, M);
    return 0;
}