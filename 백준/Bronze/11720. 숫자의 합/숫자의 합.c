#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char num[101];
  uint8_t N;
  uint16_t sum = 0;
  scanf("%hhu", &N);
  scanf("%s", num);

  for (uint8_t i = 0; i < N; i++)
  {
    sum += num[i] - '0'; 
  }
  printf("%hu", sum);

  
    return 0;
}

