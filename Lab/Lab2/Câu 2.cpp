/*2.	Write a function to calculate the factorial with given integer n, which satisfies the following:
if n is odd, factorial = 1 * 3 * 5 * … * n
if n is even, factorial = 2 * 4 * 6 *… *n
*/
#include<stdio.h>

int main()
{
	int n, product=1;
	printf("Enter your number: ");
	scanf("%d", &n);
	
	if(n%2==0){
		for(int i=2; i<=n; i+=2)
		product*=i;
	}
	else{
	    for(int i=1; i<=n; i+=2)
	    product*=i;
    }
    
    printf("factorial of %d = %d", n, product);
    
    return 0;
}
