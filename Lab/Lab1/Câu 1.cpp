#include<stdio.h>

int main()
{
	/*printf("Enter the number of digits: ");
	int n;
	scanf("%d", &n);*/
	int number,t;
	printf("Your number is: ");
	scanf("%d", &number);
	
	/*for(int i=1; i<=n; i++){	
	
	
	 t=number%10;
	 printf(" %d ", t);
	 number=number/10;
	
    }*/
    while(number>0){
     t=number%10;
	 printf(" %d ", t);
	 number=number/10;
	}
	
	
	return 0;
}

