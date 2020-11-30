/*1.	Write a Taxi meter program to calculate the taxi fare for a given mileage.

a.	The first 2km is 15,000 VND
b.	The next 250m will cost 2000 VND
c.	If the travel distance is larger than 30km then each extra km will cost only 5000VND
Allow user to input the travel distance in km and print the amount of money to be paid.
*/


#include<stdio.h>

int main()
{
	int totalfee, fee2, distance;

	printf("Enter travel distance that you want to go(units is meters please): ");
	scanf("%d", &distance);
	
    fee2=15000;
    if(distance<=2000){
	  totalfee=fee2=15000;
	}
    	
	if(distance>2000 && distance<30000){
		totalfee=fee2+(distance-2000)*8;
	}
	if(distance>30000){
		totalfee=fee2+239000+(distance-30000)*5;
	}

    printf("Total fee is %d", totalfee);
	
	
	
}
