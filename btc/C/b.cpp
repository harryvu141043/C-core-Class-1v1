#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int inputCheck(int min, int max) {
    int num;
    int check;
    char c;
    do {
        check = scanf("%d%c", &num, &c); //Returns the value of an integer
        if (check != 2 || c != '\n' || num < min || num > max) {
            printf("Please enter again!!!\n\tEnter a positive number: ");
            fflush(stdin); //Delete buffer
            check = 0; //input is a character
        } else {
            check = 1; //input is a number
        }
    } while (check == 0);
    return num;
}

int binarynumber(int n)
{
    int binary=0,sodu,i=1;
    do
        {
            sodu=n%2;
            binary=binary+ (i*sodu);
            i=i*10;
            n=n/2;
        }
    while(n>0);
    printf("%d",binary);
    
    return binary;
}
int main() {
    char s[100];
    gets(s);
    for(int i=0;i<strlen(s);i++){
    	s[i]+=5;
	}
	printf("%s",s);
}
