#include <stdio.h>

int main() {
    int i, osum = 0, esum = 0;

    for (i = 51; i <= 550; i++) {
        if (i % 2 == 0) { // Check if the number is even
            esum += i;
        } else {
            osum += i;
        }
    }
    printf("Sum of odd numbers: %d\n", osum);
    printf("Sum of even numbers: %d\n", esum);

    return 0;
}
