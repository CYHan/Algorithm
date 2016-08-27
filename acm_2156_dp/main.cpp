
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int num,a,b;
vector<int> arr;
vector<int> dp;
int maxim =0;
int main() {
    cin >> num;
    dp.assign(num,0);
    for(int i=0; i< num; i++){
        scanf("%d",&a);
        arr.emplace_back(a);
    }

    dp[0] = arr[0];
    if(num == 1) {
        cout << dp[0] << endl;
        return 0;
    }
    dp[1] = dp[0]+arr[1];
    if(num == 2){
        cout << dp[1] << endl;
        return 0;
    }
    dp[2] = max(arr[0]+arr[2],max(dp[1],arr[1]+arr[2]));
    if( num == 3 ){
        cout << dp[2] << endl;
        return 0;
    }

    for(int i=3; i < num; i++){
        dp[i] =max ( dp[i-1], max ((arr[i]+arr[i-1] + dp[i-3]),arr[i]+dp[i-2]));
    }

    for(int i=0; i<num; i++){
        //cout << dp[i] << " " << endl;
    }
    cout << dp[num-1]<< endl;
}