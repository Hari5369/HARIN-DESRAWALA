#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper half of the hourglass
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of the hourglass
    for (int i = 1; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
