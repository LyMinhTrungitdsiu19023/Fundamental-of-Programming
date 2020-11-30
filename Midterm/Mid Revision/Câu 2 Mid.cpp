#include<stdio.h>

int main()
{
	int count_positive=0, count_negative=0, n, a;
	
    printf("How many numbers? ");
    scanf("%d", &n);
	printf("Your numbers:\n");
	scanf("%d", &a);
	
	
	for(int i=1; i<n; ++i){
	 scanf("%d", &a);
	 if(a>0)
	 count_positive++;
	 else
	     if(a<0)
	     count_negative++;
	     else
	     printf("%d", 0);
	}
	
printf("The number of positive integers= %d\n", count_positive);
printf("The number of negative integers= %d\n", count_negative);

return 0;
}
