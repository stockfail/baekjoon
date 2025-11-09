#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

long long sum(int *a, int n)
{
  long long sum;
  for (uint32_t i = 0; i < n; i++)
  {
    sum += a[i];
  }
  return sum;
}
