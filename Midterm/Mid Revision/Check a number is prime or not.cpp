#include<stdio.h>

int main()
{
	int n, count=0;
	printf("Enter your number: ");
	scanf("%d", &n);
	
	for(int i=2; i*i<=n; ++i){
		if(n%i==0)
		count++;
		
	}
	if(count==0){
		printf("%d is prime\n", n);
		
	}
	else{
		printf("%d is not prime\n", n);
	}
	
	
	
	
	
}
