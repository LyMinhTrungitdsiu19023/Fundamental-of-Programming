#include <stdio.h>

int main()
{
	int n, sum=0, product=1;
	printf("Enter your number: ");
	scanf("%d", &n);
	

	while(n!=0){
	 sum=sum+n%10;
	 
	 product*=n%10;
	 
	 n=n/10;
	}
    
	printf("Sum of all digits = %d\n ", sum);
	printf("Product of all digits = %d\n", product);
	

	
	return 0;
	
	
}
