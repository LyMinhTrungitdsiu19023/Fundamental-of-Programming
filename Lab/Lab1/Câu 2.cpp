#include<stdio.h>

int main()
{
	int number, min, max, count;
	printf("Enter your number: "); 
	scanf(" %d ", &number);
	while(number!=0)
	{ 
	  scanf(" %d ", &number);
	  if(number==0) break;
	  if(count==0) 
	  min=max=number;
	  count++;
	  if(max<number) max=number;
	  if(min>number) min=number;
	
	}
	printf("Min: %d\n", min);
	printf("Max: %d\n", max); 
return 0;
 	  
	
}
