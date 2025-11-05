#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    uint32_t N;
    scanf("%u", &N);

    int32_t *arr = malloc(N * sizeof(int32_t));
    if (arr == NULL) return -1; // 메모리 부족 대비

    int32_t min, max;
    scanf("%d", &arr[0]);
    min = max = arr[0];

    for (uint32_t i = 1; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("%d %d", min, max);

    free(arr);
    return 0;
}
