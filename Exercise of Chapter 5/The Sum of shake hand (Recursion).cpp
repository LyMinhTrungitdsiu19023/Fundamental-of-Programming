/* a person enters the meeting room, 
he/she needs to shake hand with all people already in the room. 
 output the sum of shakehand at that time the n^th person comes the room*/




#include <stdio.h>
#include <math.h>

int sumofshakehand (int);

int main()
{
	int number, result;
	printf("Nhap nguoi thu vao phong");
	scanf("%ld", &number);
	result=sumofshakehand(number); 
	printf("sumofshakehand(%ld)=%ld", number, result);
	
	return 0;	
}

int sumofshakehand (int n)
{
	if(n==0 || n==1)
	  return 0;
	else 
	  return (pow(n,2)-n)/2;
} 
