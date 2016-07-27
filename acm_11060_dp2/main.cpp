#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int num,temp;
vector<int>arr;
vector<int>dp;
void process(){
    scanf("%d",&num); dp.assign(num+101,0);
    for(int i=0; i< num; i++){
        scanf("%d",&temp); arr.push_back(temp);
    }
    for(int i=0; i< num; i++){
        if(i==0 || dp[i] !=0) {
            for (int j = i + 1; j < i + 1 + arr[i]; j++) {
                if (dp[j] != 0) dp[j] = min(dp[j], (dp[i] + 1));
                else  dp[j] = dp[i] + 1;
            }
        }
    }
    if(dp[num-1]!=0) printf("%d",dp[num-1]);
    else if(num ==1) printf("0");
    else if(dp[num-1]==0) printf("-1");
}
int main() {
    process();
}