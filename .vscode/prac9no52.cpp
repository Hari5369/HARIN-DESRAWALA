#include <stdio.h>
int aos() {
	printf("For area of Square:\n");
  int ls = 5;
  int s= ls*ls;
  printf("The area of square is: %d\n", s);
}
int aor() {
	printf("For area of rectangle:\n");
  int l = 5;
  int b = 10;
  int re = l*b;
  printf("The area of rectangle is: %d\n", re);
}
int aoc() {
	printf("For area of circle\n");
  int r = 5;
  int c = 3.14*r*r;
  printf("The area of circle is: %d\n", c);
}
int main() {
  aos(); 
  aor();
  aoc();
   // call the function
  return 0;
}

