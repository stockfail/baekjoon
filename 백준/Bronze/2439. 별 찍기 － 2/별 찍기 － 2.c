#include <stdio.h>
#include <stdint.h>

int main()
{
  uint8_t N;
  scanf("%hhu", &N);
  
  for (uint8_t i = 0; i < N; i++)
  {
    for (uint8_t j = 1; j <= N; j++)
    {
      if (j+i <= N-1) printf(" ");
      else printf("*");      
    }
    printf("\n");
  }
  
  
    return 0;
}