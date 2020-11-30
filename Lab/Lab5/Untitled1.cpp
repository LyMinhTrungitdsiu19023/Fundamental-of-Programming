/* Cau 1 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int lengthoflongestsubstring(char *str)
{
    int string[200];
    int substrmaxlen = 0, length = 0, index = 0;

    memset(string, 0xff, sizeof(string));
    while (*str != '\0') {
        if (string[*str] == -1) {
            length++;
          } 
		  else {
            if (index - string[*str] > length)
				{
                length++;
            } 
			else 
			{
	        length = index - string[*str];
            }
        }
        if (length > substrmaxlen) 
		{
            substrmaxlen = length;
        }
        string[*str++] = index++;
    }

    return substrmaxlen;
}

int main(){
	
	char str[200];
	printf("Enter your string: ");
	gets(str);
	
	int lengthoflongestsubstring(char *str);
	
	printf("Your string is %s\n", str);
	printf("The length of the longest substring is: %d", lengthoflongestsubstring(str));
	
	return 0;
}

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
