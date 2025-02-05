// Write a C program:
// Read an integer value from the user to determine the size of an array.
// Dynamically allocate memory for the array based on the given size.
// Prompt the user to input elements and store them in the array.
// Use a for loop to print all the elements of the array, displaying each 
// element along with its position.

// Sample input :
// Enter the size of the array: 5
// Enter 5 elements:
// Element at index 0: 10
// Element at index 1: 20
// Element at index 2: 30
// Element at index 3: 40
// Element at index 4: 50


// Sample output :
// The elements in the array are:
// Element at index 0: 10
// Element at index 1: 20
// Element at index 2: 30
// Element at index 3: 40
// Element at index 4: 50


#include <stdio.h>
int main() {
    int n;
    int a[20],i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d element :",n);
    for(int i=0;i<n;i++){
        printf("enter at index %d:",i);
        scanf("%d",&a[i]);
        }
        printf("The elements in the array are :");
        for(i=0;i<n;i++)
        {
        printf("element at index %d : %d\n",i,a[i]);
        }
        return 0;
        }
