#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  uint8_t a;
  uint32_t b,T;

  scanf("%u", &T);

  while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int last_digit = a % 10;  // a의 마지막 자리

        if (last_digit == 0) {
            printf("10\n");       // 문제 조건: 0 → 10 출력
            continue;
        }

        // last_digit의 1~4 제곱은 주기 반복
        int mod = b % 4;
        if (mod == 0) mod = 4;     // 4의 배수이면 주기 마지막 자리

        int result = 1;
        for (int i = 0; i < mod; i++) {
            result = (result * last_digit) % 10;
        }

        printf("%d\n", result);
    }

    return 0;
}

