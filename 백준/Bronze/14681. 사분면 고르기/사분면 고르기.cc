#include <stdio.h>
#include <stdint.h>

int main()
{
    int16_t x, y;
    scanf("%hd %hd", &x, &y);
    if (x > 0)
    {
        if(y > 0) printf("1");
        else printf("4");
    }
    else 
    {
        if(y > 0) printf("2");
        else printf("3");
    }

    return 0;
}