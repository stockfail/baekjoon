#include <stdio.h>
#include <stdint.h>

int main()
{
  uint8_t A = 1, B = 1;
  while (1)
  {
    scanf("%hhu %hhu", &A, &B);
    if(A != 0 && B != 0) printf("%hhu\n", A+B);
    else break;
  }
  
    return 0;
}