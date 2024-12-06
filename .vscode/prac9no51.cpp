#include <stdio.h>
int Sum() {
	printf("For Addition:\n");
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d\n", sum);
}
int Sub() {
	printf("For Subtraction:\n");
  int x = 5;
  int y = 10;
  int sub = x - y;
  printf("The difference of x - y is: %d\n", sub);
}
int Mul() {
	printf("For Multiplication:\n");
  int x = 5;
  int y = 10;
  int mul = x * y;
  printf("The product of x * y is: %d\n", mul);
}
int Div() {
	printf("For Division:\n");
  int x = 5;
  int y = 10;
  int div = x / y;
  printf("The division of x / y is: %d\n", div);
}
int main() {
  Sum(); 
  Sub();
  Mul();
  Div(); // call the function
  return 0;
}

