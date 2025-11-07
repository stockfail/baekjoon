#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>



int main()
{
  uint8_t N, M, a, b, buf;
  uint8_t arr[100];
  scanf("%hhu %hhu", &N, &M);

  for (uint8_t i = 0; i < N; i++)
  {
    arr[i] = i+ 1; 
  }

  for (uint8_t i = 0; i < M; i++)
  {
    scanf("%hhu %hhu", &a, &b);
    buf = arr[a-1];
    arr[a-1] = arr[b-1];
    arr[b-1] = buf; 
  }
  
  for (uint8_t i = 0; i < N; i++)
  {
    printf("%hhu ", arr[i]);
  }
  

    return 0;
}