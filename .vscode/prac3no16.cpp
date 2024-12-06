#include <stdio.h>

int main() {

  char op;
  int a,b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  switch (op) {
    case '+':
      printf("%d + %d = %d", a, b, a + b);
      break;
    case '-':
      printf("%d - %d = %d", a, b, a - b);
      break;
    case '*':
      printf("%d * %d = %d", a, b, a * b);
      break;
    case '/':
      printf("%d / %d = %d", a, b, a / b);
      break;
    
    default:
      printf("INVALID CHOICE!");
  }
  return 0;
}
