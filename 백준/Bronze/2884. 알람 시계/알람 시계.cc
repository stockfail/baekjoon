#include <stdio.h>
#include <stdint.h>

int main()
{
   uint8_t H, M;
    scanf("%hhu %hhu", &H, &M);


    if (M < 45) {
        M = M + 15;          // 45분 이전이면
        H = (H == 0 ? 23 : H - 1); // 시 계산
    } else {
        M -= 45;
    }

    printf("%hhu %hhu\n", H, M);
    return 0;
}