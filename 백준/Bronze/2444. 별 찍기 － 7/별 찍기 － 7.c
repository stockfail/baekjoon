#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>



int main()
{
  uint8_t N, line;
  scanf("%hhu", &N);

  for (uint8_t i = 1; i <= 2 * N -1; i++)
  {
    line = (i <= N) ? i : 2 * N - i;
    for (uint8_t j = 0; j < N - line; j++)
    {
      printf(" ");
    }
    for (uint8_t j = 0; j < 2 * line - 1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
    return 0;
}