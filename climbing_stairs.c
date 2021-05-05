
double f=(sqrt(5));
int climbStairs(int n){
    double l=(1/f);
    double s=pow((1+f)/2.0,n+1);
    double t=pow((1-f)/2.0,n+1);
    
    return l*(s-t);
}
