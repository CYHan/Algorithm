#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int num, temp1,temp2;
int arr[501];
int dp1[501][501];
int dp2[501][501];
int mini = 2e9;
void process(){

    for(int i=0; i< temp1; i++) dp1[i][i] = arr[i], dp2[i][i] =0;
    for(int i=temp1 - 2; i >=0; i--){
        for(int j=i+1; j< temp1; j++){
            dp1[i][j] = dp1[i][j-1] + dp1[j][j];
            for(int k=i; k< j; k++) mini =  min(mini,dp2[i][k] + dp2[k+1][j] );
            dp2[i][j] = dp1[i][j] + mini;
            mini = 2e9;
        }
    }
    printf("%d\n",dp2[0][temp1-1]);

}
int main() {
    scanf("%d",&num);
    for(int i=0; i< num; i++){
        scanf("%d",&temp1);
        for(int j=0; j<temp1; j++){
            scanf("%d", &temp2);
            arr[j] = temp2;
        }
        process();
    }
}