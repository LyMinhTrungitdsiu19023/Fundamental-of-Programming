#include <stdio.h>

int main()
{
	int n, p;
	int sum=0;
	scanf("%d", &n);
	
	for( int i=1; i<=n; ++i)
	p=i*i*i;
	sum=sum+(1.0/p);
	
	printf("%.3f", sum);
    
    return 0;
	
}
