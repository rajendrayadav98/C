// Write a C program to search for an element in an array. 
// If the element is found, print its index; otherwise, 
// print "Element not found."

// Input: arr[] = {10, 20, 30, 40, 50}, key = 30
// Output: Element found at index 2

#include <stdio.h>

int main() {
    int arr[]={10,20,40,30,50};
    int n=5;
    int key=30;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("element found at index %d",i);
        }
        else("element not found",i);
    }
    return 0;
}