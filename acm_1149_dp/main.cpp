#include <iostream>
using namespace std;
int num,temp;
int dp[1001][3];
int sum=0;
int main() {
    scanf("%d",&num);
    for(int i=0; i< num; i++){
        for(int j=0; j< 3; j++) {
            scanf("%d", &temp);
            if(i!=0)dp[i][j] = min(dp[i-1][(j+1)%3]+temp,dp[i-1][(j+2)%3]+temp);
            else if(i ==0)dp[i][j] = temp;
        }
    }
    printf("%d",min(dp[num-1][0],min(dp[num-1][1],dp[num-1][2])));
}