#include <stdio.h>
int maxProfit(int* prices, int pricesSize) {
    int minPrice=prices[0];
    int maxProfit= 0;
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<=minPrice){
            minPrice = prices[i];
        }
        int profit = prices[i] - minPrice;
        if(profit>maxProfit){
            maxProfit = profit;
        }
    }
    return maxProfit;
    
}
int main(){
    int pricesSize;
    printf("Enter the size of the prices array: ");
    scanf("%d", &pricesSize);
    int prices[pricesSize];
    printf("Enter the prices: ");
    for(int i=0;i<pricesSize;i++){
        scanf("%d", &prices[i]);
    }
    int result = maxProfit(prices, pricesSize);
    printf("Maximum profit is: %d\n", result);
    return 0;
}