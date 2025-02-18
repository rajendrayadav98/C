// Write a c program that will first missing Element in  the given Array

// Input:
// int arr[]={1,25,7,9}
// Output: First missing element is 2

#include <stdio.h>

int main() {
    int arr[]={1,25,7,9};
    int n=4;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
               int tem=arr[i];
               arr[i]=arr[j];
               arr[j]=tem;
           } 
        }
    }
    printf("Missing elements are :-");
    for(int i=0;i<n;i++){
        for(int j=arr[i]+1;j<arr[i+1];j++){
            printf(" %3d",j);
            break;
        }
        break;
    }
    return 0;
}