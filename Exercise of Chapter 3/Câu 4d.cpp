#include <stdio.h>

int main()

{
	int n, i, sum=0;
	scanf("%d", &n);
	
	for(int i=2; i<=n; i+=2)
	
	
	printf("%d\n", i);
	
	sum=sum+i;
	printf("sum of them = %d\n", sum);
	
	return 0; 
}
