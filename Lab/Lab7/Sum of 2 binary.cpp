#include<stdio.h>

int main()
{
 
    long k=1111, f=111;
    int i = 0, remainder = 0, sum[20];
 

    while (k != 0 || f != 0)
    {
        sum[i++] =(k % 10 + f % 10 + remainder) % 2;
        remainder =(k % 10 + f % 10 + remainder) / 2;
        k = k / 10;
        f = f / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        printf("%d", sum[i--]);
    return 0;
}
