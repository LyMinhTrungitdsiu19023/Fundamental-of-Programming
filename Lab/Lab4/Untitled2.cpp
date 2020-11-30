#include<stdio.h>

/*int ex2(int a[][100], int m, int n)
{
	int count=0, temp, i, j, k;
	if(n%2==0){
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				for(k=(j+1); k<n; ++k)
				if(a[i]>a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					count++;
				}
			}
		}
	}
	else{
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				for(k=(j+1); k<n; ++k)
				if(a[i]<a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					count++;
				}
			}
		}
	}
	printf("%d", a[i][j]);
	return 0;
}*/

int ex5(int a[][100], int m, int n){
	int max=-9999;
	for(int i=0; i<m; i++){
		int min = 9999;
		for(int j=0; j<n; j++){
			
			if(a[i][j]<min) min=a[i][j];
	
			}
		if(min>max) max=min;

}
	printf("Max of row: %d\n", max);
return 0;
}

int main(){
	
	int a[100][100];
	int m, n;
	printf("Enter the number of rows: ");
	scanf("%d", &m);
	printf("Enter the number of columns: ");
	scanf("%d", &n);
	printf("Enter element of the array:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n;j++){
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("The array that you input:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf(" %d ", a[i][j]);
		}
		
	printf("\n");     
}
    /*ex2(a, m, n);*/
    ex5(a, m, n);
return 0;
}
