#include <stdio.h>
int main()
{
	int i,j;
	char in, a='A';
	printf("Enter an uppercase character: ");
	scanf("%c",&in);
	for(i=1;i<=(in -'A'+ 1);i++){
		for(j=1;j<=i;j++){
			printf("%c",a);
		}
		a++;
		printf("\n");
	}
	return 0;
	
	
}
