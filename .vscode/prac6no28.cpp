#include <stdio.h>
int main()
{
	int r=5;
	for(int i=0;i<r;i++){
		for(int j=0;j<2*(r-i)-1;j++){
			printf(" ");
		}
		for(int k=0;k<i;k++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
	
}
