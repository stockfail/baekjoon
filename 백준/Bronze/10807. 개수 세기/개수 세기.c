#include <stdio.h>
#include <stdint.h>

int main()
{
  uint8_t N, cnt = 0;
  int8_t num_arr [100];
  int8_t num;
  scanf("%hhu", &N);
  for (uint8_t i = 0; i < N; i++)
  {
    scanf("%hhd ", &num);
    num_arr[i] = num;
  }
    scanf("%hhd", &num);
  for (uint8_t i = 0; i < N; i++)
  {
    cnt = (num == num_arr[i]) ? cnt + 1 : cnt;
  }
  printf("%hhu", cnt);
  
  
    return 0;
}