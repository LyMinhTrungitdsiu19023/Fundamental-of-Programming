#include<stdio.h>

int main()

{
	int n, number,count=0, sum=0, product=1, min, max; 
	float average;
	printf("How many number?");
	scanf("%d", &n);
	printf("Enter your number:\n");
	
	while(number>=0)
	{
	  scanf("%d", &number);
	  if(number==1) break;
	  if(count==0) min=max=number;
	  
	  if(number>=0){
      count++;
	  if(min>number) min=number;
	  if(max<number) max=number;
	  }
	  sum=sum+number;
	  product*=number;
	  
	}
	
	average=sum/n;
	
	printf("Min=%d\n", min);
	printf("Max=%d\n", max);
	printf("Average=%.2f\n", average);
	printf("Product=%d\n", product);

	
	return 0;
}
