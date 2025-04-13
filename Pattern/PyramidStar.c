#include <stdio.h>

int main() {
    int i, j, k, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for each row
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

    return 0;
}
