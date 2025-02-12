// Write a c program to print the array in  Descending Order

// Enter the number of elements: 5
// Enter 5 elements: 34 12 56 78 23

#include <stdio.h>

int main() {
   int arr[10]={64,25,12,22,11};
   int n=5;
   for(int i=0;i<=n-2;i++){
       for(int j=0;j<=n-i-2;j++)
       {
        if(arr[j]<arr[j+1])
        {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
        }
        }
       for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
       }
     
     return 0;
}