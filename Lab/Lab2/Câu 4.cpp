/*4.	Input an array of n integers, n is even. Sort the first half in increasing order and second half decreasing order*/
#include<stdio.h>
#include<stdlib.h>


int main()
{  
    int n,m, k, i, j, temp;
    int a1[100];
    
    printf("Enter the size of array(size is even only): ");
    scanf("%d",&k);
    printf("Enter array\n");
    for(i=0; i<k; i++)     
    {
	printf("a1[%d]=", i);   
    scanf("%d", &a1[i]);
    }
	
	for(int i=0; i<k/2; ++i){
		for(int j=0; j<k/2; ++j){
			if(a1[i]<a1[j]){
				temp=a1[i];
				a1[i]=a1[j];
				a1[j]=temp;
			}
			
		}
	}
    for(int i=k/2; i<k; ++i){
    	for(int j=k/2; j<k; ++j){
    		if(a1[i]>a1[j]){
    			temp=a1[i];
    			a1[i]=a1[j];
    			a1[j]=temp;
			}
		}
    	
	}
    for(int i=0; i<k/2; ++i){
    	printf(" %d ", a1[i]);
	}
	printf("|");
	for(int i=k/2; i<k; ++i){
		printf(" %d ", a1[i]);
    } 
    return 0; 
    printf("\n");
    
	printf("Enter the new array\n");
    
	printf("Enter size of array 1 again: ");
    scanf("%d", &n);
    
    
	printf("Enter size of  array 2: ");
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
		
		
	return 0;
	
}
