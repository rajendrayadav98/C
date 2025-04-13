#include <stdio.h>

int main() {
    int i, j, k, rows;

    printf("Enter the number of rows (half of the diamond): ");
    scanf("%d", &rows);

    // Print the upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Loop for spaces
        for (j = i; j < rows; j++) {
            printf(" ");
        }

        // Loop for stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    // Print the lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Loop for spaces
        for (j = rows; j > i; j--) {
            printf(" ");
        }

        // Loop for stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
