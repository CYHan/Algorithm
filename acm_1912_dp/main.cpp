#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int num,temp,cnt=0;

vector<int> dp;
void input(){
    scanf("%d",&num);
    dp.assign(num,0);
}
void process(){
    scanf("%d",&temp);
    dp[0] = temp;
    int maxim = dp[0];
    for(int i=1; i< num; i++){
        scanf("%d",&temp);
        dp[i] = max(temp, dp[i-1]+temp);
        maxim = max(maxim,dp[i]);
    }
    printf("%d",maxim);
}
int main() {
    input();
    process();
}