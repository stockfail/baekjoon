#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>



int main()
{
  uint8_t N, M, a, b, c;
  uint8_t arr[100] = {0};
  scanf("%hhu %hhu", &N, &M);

  for (uint8_t i = 0; i < M; i++)
  {
    scanf("%hhu %hhu %hhu", &a, &b, &c);
    for (uint8_t i = a-1; i < b; i++)
    {
      arr[i] = c;
    }   
  }
  
  for (uint8_t i = 0; i < N; i++)
  {
    printf("%hhu ", arr[i]);
  }
  

    return 0;
}