#include <stdio.h>
#include <string.h>

int main() {
	char s1[200] ;
	char s2[200];
	printf("Enter any string: ");
	gets(s1);
	
	strcpy(s2, s1);
	strrev(s2);
	
	if(strcmp(s1, s2) == 0)
		printf("The entered string %s is a palindrome.\n", s1);
	else
		printf("The entered string %s is not a palindrome.\n", s1);
	
	printf("The reverse of the string is %s.\n", s2);
	return 0;
}

