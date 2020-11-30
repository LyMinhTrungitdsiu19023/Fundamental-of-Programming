#include <stdio.h>
int main()
{
	int n, i;
	printf("Enter n;");
	scanf("%d", &n);
    for (int i = 1; i < n; ++i)
    {
        int count = 0; 
        for (int j = 2; j*j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0 && i > 1)
            printf(" %d ", i);
    }
}
