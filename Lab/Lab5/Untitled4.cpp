/* Cau 3 */

#include<stdio.h>
	#include<stdlib.h>
	int main(){
	int n, m, i, j, temp;
    double a,b;
   
    
    printf("How many element that you want to input for array 1?: ");
    scanf("%d", &n);
    
    
	printf("How many element that you want to input for array 2?: ");
    scanf("%d",&m);
    
    int arr1[n];
	printf("Enter array 1:\n");
    for(int i=0; i<n; i++){
        printf("arr1[%d]= ", i);
        scanf("%d", &arr1[i]);}
    
	int arr2[m];
	printf("Enter array 2:\n");
    for(int i=0; i<m; i++){
        printf("arr2[%d]= ", i);
        scanf("%d", &arr2[i]);}
   
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
            if(arr1[j]<arr1[i])
        {
            temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=i; j<m; j++)
            if(arr2[j]<arr2[i])
        {
            temp=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=temp;
        }
    }
    int arr3[m+n];
    for(i=0; i<n; i++)
        arr3[i]=arr1[i];
    for(i=0; i<m; i++)
        arr3[i+n]=arr2[i];
    
	
	for(i=0; i<m+n; i++){
		for(j=0; j<m+n; j++){
			if(arr3[i]<arr3[j]){
				temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	printf("Array 3 is sorted: ", arr3);
	
    for(i=0; i<m+n; i++)
        printf("%d ",arr3[i]);
    if((m+n) % 2 == 1)
        printf("\nMedian is %d",arr3[(n+m)/2]);
    else
    {
        a=arr3[(n+m)/2-1]+0.0;
        b=arr3[(n+m)/2]+0.0;
        printf("\nMedian is %.2f",(a+b)/2);
    }
}
