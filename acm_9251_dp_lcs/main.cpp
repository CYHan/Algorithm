#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <stdlib.h>
using namespace std;
string a,b;
int dp[1005][1005];
int asize,bsize;

void input(){
    cin >> a >> b;
    asize = a.length();
    bsize = b.length();

}
void output(){
    for(int i=0; i<= bsize; i++){
        for(int j =0; j<= asize; j++){
            if( i ==0 || j ==0) dp[i][j] =0;
            else if(a[j-1] == b[i-1]) dp[i][j] = dp[i-1][j-1] +1;
            else  dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }


    cout << dp[bsize][asize] << endl;
}




int main() {
    input();
    output();
}