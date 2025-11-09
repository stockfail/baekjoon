#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>



int main()
{
  static char A[100001], B[100001];
    scanf("%s %s", A, B);
    int len = strlen(A);

    for (int i = 0; i < len; i++) printf("%c", (A[i]=='1'&&B[i]=='1')?'1':'0');
    printf("\n");
    for (int i = 0; i < len; i++) printf("%c", (A[i]=='1'||B[i]=='1')?'1':'0');
    printf("\n");
    for (int i = 0; i < len; i++) printf("%c", (A[i]!=B[i])?'1':'0');
    printf("\n");
    for (int i = 0; i < len; i++) printf("%c", (A[i]=='1')?'0':'1');
    printf("\n");
    for (int i = 0; i < len; i++) printf("%c", (B[i]=='1')?'0':'1');
    printf("\n");
  

    return 0;
}