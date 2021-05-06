#define MIN(X,Y) ((X)>(Y)) ? (Y) : (X);

int minCostClimbingStairs(int* cost, int costSize){
    int i;
    for(i=2;i<costSize;i++){
        cost[i]+=MIN(cost[i-2],cost[i-1]);
    }
    return MIN(cost[costSize-1],cost[costSize-2]);
    
}
