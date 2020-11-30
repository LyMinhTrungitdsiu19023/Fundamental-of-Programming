#include<stdio.h>


int ex1(int a[], int n) /*Symmertric*/
{
  
  for(int i=0;i<n/2;i++)
  {
  if(a[i]==a[n-1-i]){
   printf("Symmetric\n");}
  else{
   printf("Not Symmetric\n");}
   break;
  }
  return 0;
}

int ex3(int a[], int n)  /*the largest sorted subarray */
{
	int max=1, l=1, maxofi=0;
	for(int i=1; i<n; ++i){
		if(a[i]>a[i-1]){
			l++;
		}
		else{
			if(max<l){
				max=l;
				maxofi=i-max;
			}
		l=1;	
		}
		
	}
	if(max<l){
		max=l;
		maxofi=n-max;
	}
	for(int i=maxofi; i<max+maxofi; i++)
	printf("%d", a[i]);
	
	return 0;
	
}


int ex4(int a[], int n) /*check whether a given array is sorted or not*/
{
    int x=1, y=1, i;
	while(x==1 || y==1 && i<n-1){
	if(a[i]<a[i+1])
	y=0;
	if(a[i]>a[i+1])
	x=0;
	i++;	
}
    if(x==1){
    	printf("1(Array is increasing)");}
	else {
	if(y==1){
		printf("-1(Array is decreasing)");}
	else{
		printf("0(Array is not sorted)");}
	}


   return 0;
}
 
 
 int ex5(int a[], int n)
{
   int temp, t=0;
   for(int i=0; i<n; ++i){
   		if(a[i]>0){
   			temp=a[i];
   			a[i]=a[t];
   			a[t]=temp;
   			t++;
		   }
			
		}
	   for(int i=0; i<n; ++i){
	   printf("%d", a[i]);}
	   return 0;
   }
	

int main()
{
	int a[100];
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("Exercise 1:\n");
	ex1(a,n);
	printf("Exercise 3:\n");
	ex3(a,n);
	printf("\nExercise 4:\n");
	ex4(a,n);
	printf("\nExcercies 5:\n");
	ex5(a,n);
	return 0;
}

