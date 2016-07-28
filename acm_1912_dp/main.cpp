#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int num,temp;
int dp[10001][10001];
vector<int> arr;
void input(){

    scanf("%d",&num);
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            dp[i][j] =0;
        }
    }
    for(int i=0; i<num; i++){
        scanf("%d",&temp);
        arr.push_back(temp);
    }
    for(int i=0; i<num-1; i++){
        dp[i][i+1] = arr[i] + arr[i+1];
    }
    for(int i=num-3; i >=0; i--){
        for(int j=i+2; j < num; j++){
            dp[i][j] = dp[i+1][j] + dp[i][j-1] - arr[j-1];
        }
    }


    for(int i=0; i< num; i++){
        for(int j=0; j< num; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

}
int main() {
    input();
}