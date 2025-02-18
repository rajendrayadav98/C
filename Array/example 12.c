// Write a c program that will insert the element 
// at given Position

// Input:
// int arr[]={1,2,5,6,7,8}
// Element to Insert:3
// Position to Element:2

// Output:
// 1 3 2 5 6 7 8



#include <stdio.h>

int main() {
    int n;
    int ele=8;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int arr[n+1];
    int pos=3;
    //copy the element from old array to new array
    for(int i=0;i<pos;i++)
    {
        arr[i]=a[i];
    }
    // insert
    arr[pos]=ele;
    for(int i=pos+1;i<n+1;i++)
    {
        arr[i]=a[i-1];
    }
    /*int pos=2;
    printf("enter the position:");
    scanf("%d",&pos);
    n=n+1;
    printf("enter the inserted array:");
    scanf("%d",&ele);
    a[n-1]=ele;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }*/
    for(int i=0;i<n+1;i++){
        printf("%3d",arr[i]);
    }
    return 0;
}