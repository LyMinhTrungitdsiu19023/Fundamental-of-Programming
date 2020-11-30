
/*3.	Write a function to represent a given integer as product of prime numbers
Example: 24 = 2*2*2*3
*/
#include<stdio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d=", n);
	while(n%2==0){
		printf(" %d ", 2);
		n/=2;
		
	}
	for(int i=3; i*i<=n; i+=2){
		while(n%i==0){
			printf(" %d ", i);
			n/=i;
			
		}
	}
	if(n>2){
		printf("%d", n);
	}
	return 0;
}
