#include <stdio.h>

int main() {

  char ch;
  int ls,l,b,r,ar_c,ar_r,ar_s;
  float r;
  printf("Choose an operation from below:\n ");
  printf("1-Area of Circle\n ");
  printf("2-Area of Rectangle\n ");
  printf("3-Area of Square ");
  scanf("%c", &ch);
  switch (ch) {
    case '1':
      printf("Enter radius of circle : ");
      scanf("%f",&r);
      ar_c=r*r*3.14;
      printf("Area of Triangle=%f",ar_c);
      break;
    case '2':
      printf("Enter length of rectangle:");
      scanf("%d",&l);
      printf("Enter breadth of rectangle:");
      scanf("%d",&b);
      ar_r=l*b;
      printf("Area of Rectanglr=%d",ar_r);
      break;
    case '3':
      printf("Enter sidelength of Square:");
      scanf("%d",&ls);
      ar_s=ls*ls;
      printf("Area of square=%d",ar_s);
      break;
    
    default:
      printf("INVALID CHOICE!");
  }
  return 0;
}
