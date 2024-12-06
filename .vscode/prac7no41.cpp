#include <stdio.h>

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = 1;

    for(int i = 0; i < 10; i++) {
        result *= numbers[i];
    }

    printf("The product of the first 10 numbers is: %d\n", result);

    return 0;
}
