// Imagine you are running a small shop selling various items, such as groceries, stationery, and household products. One day, you decide to sell 100 units of a particular item that you bought in bulk.

// Here is the information you have :-
// ------------------------------------
// -> Cost Price (CP) per unit: ₹50
// -> Selling Price (SP) per unit: ₹60

// Using the C program provided, calculate the total profit or loss you made from selling all 100 units of the item. Additionally, determine the outcome if you had to reduce the selling price to ₹45 per unit due to a sudden market drop.

// Sample Input-1 :-
// -----------------
// Enter Cost Price (CP): ₹50
// Enter Selling Price (SP): ₹60

// Sample Output :-
// ----------------
// Profit per unit = ₹10
// Total Profit on 100 units = ₹1000

// Sample Input-2 :-
// -----------------
// Enter Cost Price (CP): ₹50
// Enter Selling Price (SP): ₹45

// Sample Output :-
// ----------------
// Loss per unit = ₹5
// Total Loss on 100 units = ₹500
// -----------------------------------------------------------------------
#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter the Cost price :");
    scanf("%f",&cp);
    printf("Enter the selling Price :");
    scanf("%f",&sp);

    if(sp>cp){
    profit=sp-cp;
    printf("Profit for 1 unit is :%.2f",profit);
    printf("\nProfit for 100 unit is :%.2f",profit*100);
    }else if(sp<cp){
    loss=cp-sp;
    printf("Profit for 1 unit is :%.2f",loss);
    printf("\nProfit for 100 unit is :%.2f",loss*100);
    }
    return 0;
}