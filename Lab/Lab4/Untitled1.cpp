#include<stdio.h>

int main(){
	
	int n, m=1, s;
	printf("Enter number: ");
	scanf("%d", &n);
	
	for(int i=0; i<n+1; i++){
		for(s=1; s<=n-i; s++)
		printf(" ");
		for(int j=0; j<=i; j++){
			if(i==0 || j==0)
			m=1;
			else
			m=m*(i-j+1)/j;
			printf("%2d", m);
		}
		printf("\n");
	}
	return 0;
	
}
