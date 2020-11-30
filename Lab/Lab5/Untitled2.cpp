
/* Cau 2*/
#include<stdio.h>

int main(){
	int a[100];
	int n, t;
	printf("How many element that you want to input? ");
	scanf("%d", &n);
	printf("Enter your array: \n");
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("Enter target: ");
	scanf("%d", &t);
	
	for(int i=0; i<n; i++){
		for(int j=i+i; j<n; j++){
			if(a[i] + a[j] == t){
			printf("return [%d,%d]", i, j);
			break;
		    }
		}
	}

	return 0; 
	}

