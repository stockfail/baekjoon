#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    uint8_t S[21] = {0};  // 인덱스 1~20 사용
    uint32_t M;
    char odr[10];
    uint8_t x;

    scanf("%u", &M);

    for (uint32_t i = 0; i < M; i++)
    {
        scanf("%s", odr);

        if (strcmp(odr, "add") == 0) {
            scanf("%hhu", &x);
            S[x] = 1;
        }
        else if (strcmp(odr, "remove") == 0) {
            scanf("%hhu", &x);
            S[x] = 0;
        }
        else if (strcmp(odr, "check") == 0) {
            scanf("%hhu", &x);
            printf("%d\n", S[x]);
        }
        else if (strcmp(odr, "toggle") == 0) {
            scanf("%hhu", &x);
            S[x] ^= 1;  // 0이면 1, 1이면 0
        }
        else if (strcmp(odr, "all") == 0) {
            for (uint8_t j = 1; j <= 20; j++)
                S[j] = 1;
        }
        else if (strcmp(odr, "empty") == 0) {
            for (uint8_t j = 1; j <= 20; j++)
                S[j] = 0;
        }
    }  

    return 0;
}