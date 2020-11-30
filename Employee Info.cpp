#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct employeeData{    // cho nay la ong khai bao kieu du lieu
	int ID;
	char firstname[10];
	char lastname[10];
	float rating;
	char email[100];
};

typedef employeeData EV; // cho nay là tui doi ten tu employeeData thanh EV cho ngan
void input(EV &ev){ //Nay là ham nhap vao
	printf("Input ID: "); scanf("%d", &ev.ID);
	printf("First name: "); scanf("%s", &ev.firstname);
	printf("Last name: "); scanf("%s", &ev.lastname);
	printf("Rating: "); scanf("%f", &ev.rating);
	printf("Email: "); scanf("%s", &ev.email); 
	printf("\n--*--\n");
}
void inputN(EV a[], int n){ //ham nhap vao nhung theo dang array
	printf("\n____________________________________\n");
	for(int i = 0; i< n; ++i){
    printf("\nEmployee %d:\n", i+1);
    input(a[i]);
    }
    printf("\n____________________________________\n");
}

void output(EV ev){ // hàm xuat
	printf("-ID: %d\n", ev.ID);
	printf("-Name: %s %s\n", ev.firstname, ev.lastname );
	printf("-Rating: %.2f", ev.rating); 
	printf("*\n");
	printf("-Email: %s", ev.email);
	
}
void outputN(EV a[], int n){ //xuat array
    printf("\n____________________________________\n");
    for(int i = 0; i < n; ++i){
        printf("\nInformation of Employee %d:\n", i+1);
        output(a[i]);
        printf("\n");
    }
    printf("\n____________________________________\n");
}

int main(){
	int n; 
	printf("Input the number of employees: ");
	scanf("%d", &n);
	EV a[n]; // goi ham minh khai bao o tren
	inputN(a, n);// tuong tu
	printf("-----Information of Employees -----");
    outputN(a, n);// tuong tu


	return 0;
}
