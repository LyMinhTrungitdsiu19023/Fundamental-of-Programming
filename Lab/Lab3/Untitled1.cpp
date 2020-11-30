#include<stdio.h>

int main(){
	int b[2][3]= {1,2,3,4,5,6};
	
	printf("%p\n", b[0]);
	printf("%p\n", &b[1][1]);
}
