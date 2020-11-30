#include <stdio.h>
#include <stdlib.h>

int ex5(char *testcase){
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase1="[{()}]";
    char *testcase2="([)]";

	ex5(testcase1);
    ex5(testcase2);
	printf("valid");
	printf("invalid");
		
	return 0;
}
