// Sum Of Even And Sum Of Odd Elements
// Sum of Even-Indexed and Odd-Indexed Elements
// Ex:Enter the number of elements: 10
// Enter 10 elements: 1 2 3 4 5 6 7 8 9 10
// Sum of even-indexed elements = 25
// Sum of odd-indexed elements = 30

   #include <stdio.h>
    int main() {
    int n;
    int even=0,odd=0;
    printf("enter the arry size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the number of elements: \n",n);
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            even=even+a[i];
        }
        else{
            odd=odd+a[i];
        }
        
    }
    printf("sum of even-index element = %d",even);
    printf("\n");
    printf("sum of odd-index element = %d",odd);
    return 0;
}