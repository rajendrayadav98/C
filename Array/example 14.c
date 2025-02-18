// Write a c program that will find the missing elements in the given Unsorted Array

// Input:
// int arr[]={1,3,4,6,8}
// Output:
// 2 5 7

#include <stdio.h>

int main() {
    int arr[]={1,3,4,6,8};
    int n=5;
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
    for(int i=0;i<n;i++){
        for(int j=arr[i]+1;j<arr[i+1];j++)
        {
        printf("%3d",j);
        }
    }
    return 0;
}