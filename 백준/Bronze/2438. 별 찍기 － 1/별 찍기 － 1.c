#include <stdio.h>
#include <stdint.h>

int main()
{
  uint8_t N;
  scanf("%hhu", &N);
  
  for (uint8_t i = 1; i <= N; i++)
  {
    for (uint8_t j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  
    return 0;
}