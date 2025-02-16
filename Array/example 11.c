// Write a C program to find the first and last occurrence 
//  of a given element in a sorted array.
// Input: arr[] = {1, 2, 3, 3, 3, 4, 5}, key = 3
// Output: First occurrence at index 2, Last occurrence at index 4

#include <stdio.h>

int main() {
    int arr[]={1,2,3,3,3,4,5};
    int n=7;
    int key=3;
    for(int i=0;i<n;i++){
    if(arr[i]==key){
    printf("first occurrence at index %d\n",i);
    break;
    }
    }
    for(int i=n-1;i>=0;i--){
    if(arr[i]==key){
    printf("last occurrence at index %d",i);
    break ;
    }
    }
    return 0;
    }