#include<stdio.h>

int main()
{
	int n, a, b=11, isbool; 
	printf("Enter your number: ");
	scanf("%d", &n);
	
	isbool=true;
	while(n>0){
		a=n%10;
		n=n/10;
		if(a>b)
		isbool=false;
		
		else b=a;
	}
	if(isbool){
		printf("Yes");
	}
	else{
		printf("No");
	}
	}
