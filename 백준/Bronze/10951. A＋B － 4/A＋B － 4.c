#include <stdio.h>
#include <stdint.h>

int main()
{
  int8_t A , B;
  while (scanf("%hhd %hhd", &A, &B) == 2)
  {
    printf("%hhd\n", A+B); 
  }
  
    return 0;
}