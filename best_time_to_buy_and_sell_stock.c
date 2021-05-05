
int maxProfit(int* prices, int pricesSize){
    int max_profit=0,buy=prices[0];
    int i;
    for(i=1;i<pricesSize;i++){
        if(buy>prices[i]){
            buy=prices[i];
        }
        else if((prices[i]-buy)>max_profit){
            max_profit=prices[i]-buy;
        }
    }
    
   
    return max_profit;
}
