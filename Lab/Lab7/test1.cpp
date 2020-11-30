#include<stdio.h>



int main(){
	
	int arr[100];
	int n, value, count=0, max;
	/*printf("Enter array\n");
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);
		scanf("%d", &arr[i]);
		
	}*/
	scanf("%d", &value);
    
	while(value>0){
		scanf("%d", &value);
		if(count==0) max=value;
		if(max<value) max=value;
		
	}

	printf("%d", max);
}
