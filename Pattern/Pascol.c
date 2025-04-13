#include <stdio.h>

int main() {
    int rows, i, j, number = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // Loop for spaces
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Loop for numbers in each row
        number = 1; // First number in the row is always 1
        for (j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1); // Formula for Pascal's Triangle
        }

        printf("\n");
    }

    return 0;
}
