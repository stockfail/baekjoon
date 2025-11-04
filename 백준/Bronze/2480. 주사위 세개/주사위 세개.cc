#include <stdio.h>
#include <stdint.h>

int main()
{
   uint16_t A, B, C;
   uint16_t won;

   scanf("%hu %hu %hu", &A, &B, &C);
   if (A == B && B == C)
   {
     won = 10000 + A * 1000;
   }
   else if ((A == B) || (B == C) || (A == C))
   {
     won = (A == B) ? (1000 + A * 100) : (1000 + C * 100);
   }
   else 
   {
     if (A >= B && A >= C) won = 100 * A;
     else if (B >= A && B >= C) won = 100 * B;
     else if (C >= B && C >= A) won = 100 * C;
   }
   printf("%hu", won);

    return 0;
}