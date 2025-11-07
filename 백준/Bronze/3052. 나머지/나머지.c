#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>



int main()
{
  uint8_t remain[42] = {0};
  uint8_t cnt = 0;
  uint16_t num;

  for (uint8_t i = 0; i < 10; i++)
  {
    scanf("%hu", &num);
    remain[num % 42] = 1;
  }
  
  for (uint8_t i = 0; i < 42; i++)
  {
    cnt += remain[i];
  }
  
  printf("%hhu", cnt);
    return 0;
}