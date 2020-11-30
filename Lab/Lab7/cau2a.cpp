#include<stdio.h>

int main(){
	int a[200];
	int temp, n;
	
	printf("Enter size of array: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]); 
	}
	for(int i=0; i<n/2; i++){
		for(int j=0; j<n/2; j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=n/2; i<=n; i++){
		for(int j=n/2; j<=n; j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0; i<n/2; i++)
	printf("%d", a[i]);
	for(int i=n/2; i<n; i++)
	printf("%d", a[i]);
	
	return 0;
}
