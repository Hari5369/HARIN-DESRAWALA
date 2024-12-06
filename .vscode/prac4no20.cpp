#include <stdio.h>

int main() {
  int n, rev= 0, rem=0, ori;

  printf("Enter an integer: ");
  scanf("%d", &n);

  ori = n;  

  while (n != 0) {
    rem = n % 10;
    rev= rev * 10 + rem;
    n /= 10;
  }

  if (ori % 10 == 0) {
    printf("Reversed number = %d", rev);
    
    while (ori % 10 == 0) {
      printf("0");
      ori /= 10;
    }
  } else {
    printf("Reversed number = %d", rev);
  }
  return 0;
}
