int main(){
	
	int a[100][100];
	int m, n;
	printf("Enter the number of rows: ");
	scanf("%d", &m);
	printf("Enter the number of columns(must equal to row): ");
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
return 0;
}
