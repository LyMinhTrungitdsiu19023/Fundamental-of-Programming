#include <stdio.h>

int main()
{
	int n, i, sum=0;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i+=2)

	printf("number:%d\n", i);
	
	
	sum=sum+i;
    printf("sum of them=%d", sum);
	
	return 0;
	
}
