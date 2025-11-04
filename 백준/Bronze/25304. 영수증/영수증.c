#include <stdio.h>
#include <stdint.h>

int main()
{
   uint32_t X, sum = 0;
   uint32_t N, a, b;
   
   scanf("%u", &X);
   scanf("%u", &N);
   while (N)
   {
     scanf("%u %u", &a, &b);
     sum += a * b;
     N--;
   }
   if (X == sum) printf("Yes");
   else printf("No");

    return 0;
}