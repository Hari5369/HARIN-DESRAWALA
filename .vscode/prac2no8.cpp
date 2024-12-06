#include <stdio.h>
int main()
{
	int l,b,r,ar_r,ar_c;
	printf("Enter length of rect.: ");
	scanf("%d",&l);
	printf("Enter breadth of rect.: ");
	scanf("%d",&b);
	printf("Enter radius of circle: ");
	scanf("%d",&r);
	ar_r=l*b;
	ar_c=3.14*r*r;
	printf("Area of rectangle = %d",ar_r);
	printf("\nArea of circle = %d",ar_c);
	return 0;
}

