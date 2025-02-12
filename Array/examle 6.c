// Write a C program to find the minimum and maximum elements of a given array.

// Sample input:
// Array: {23, 45, 12, 78, 5, 89, 34}

// Sample output :
// Minimum element: 5
// Maximum element: 89
Sol:
    #include <stdio.h>
    int main() {
    int arr[10]={23,45,12,78,5,89,34};
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<7;i++){
       if(max<arr[i])
       {
           max=arr[i];
       }
       if(min>arr[i]){
           min=arr[i];
       }
       }
       
     printf("Minimum element:%d\n",min);
     printf("Maximum element:%d",max);
     return 0;
     }