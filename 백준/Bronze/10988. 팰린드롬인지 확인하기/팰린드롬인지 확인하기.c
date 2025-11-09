#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char S[101];
  scanf("%s", S);
  uint8_t a = 0, b = strlen(S)-1;

  while (a < b)
  {
    if(S[a] != S[b]) 
    {
      printf("0");
      return 0;
    }
    a++;
    b--;
  }
  printf("1");

  return 0;
}

