#include <stdio.h>
#include <string.h>
#include <stdlib.h>
     int ex3(char *str){
     char w[100][100], s[100], l[100];  
     int i = 0, j = 0, k, length;  
     for(k=0; str[k]!='\0'; k++){  
        if(str[k] != ' ' && str[k] != '\0'){  
            w[i][j++] = str[k];  
        }  
        else{  
            w[i][j] = '\0';  
            i++;  
            j = 0;  
        }  
    }  
    length = i + 1;  
    strcpy(s, w[0]);  
    strcpy(l, w[0]);  
    for(k = 0; k < length; k++){  
        if(strlen(s) > strlen(w[k])){  
            strcpy(s, w[k]);  
        }  
        if(strlen(l) < strlen(w[k]))  
            strcpy(l, w[k]);  
    } 
    printf("%s", s);  
    printf(" %s", l);       
    return 0;     
}
//your codes here
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *str = "This is a string";
	ex3(str);
	return 0;
}
