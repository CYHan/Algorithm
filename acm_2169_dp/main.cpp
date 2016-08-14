#include <iostream>
#include <vector>
using namespace std;
int a,b,temp;
int arr[1001][1001];
int dp1[1001][1001];
int dp2[1001][1001];
int sum = 0;
bool check = false;
void input(){
    scanf("%d%d",&a,&b);
    for(int i=0; i< a; i++) {
        for (int j = 0; j < b; j++){
            scanf("%d", &arr[i][j]);
            if( a ==1 || b == 1) {
                check = true;
                sum += arr[i][j];
            }
        }
    }
    if(check == true) {
        cout << sum << endl;

        return;
    }
}

void process(){
    dp1[0][0] = dp2[0][0]= arr[0][0];
    for(int i=1; i< b; i++) dp2[0][i] = dp1[0][i] = dp1[0][i-1]+arr[0][i];
    for(int i=1; i< a-1; i++) {
        for (int j = 0; j < b; j++) {
            if (j >=1) dp1[i][j] = max(dp1[i - 1][j], dp1[i][j - 1]) + arr[i][j];
            else  dp1[i][j] = dp1[i-1][j] + arr[i][j];


            if(b - j - 1 < b - 1 ) dp2[i][b -1 -j] = max(dp2[i-1][b-1-j], dp2[i][b-j]) + arr[i][b-1-j];
            else  dp2[i][b-1 -j] = dp2[i-1][b-j-1] + arr[i][b-1-j];
        }
        for(int j=0; j < b; j++){
            dp1[i][j] = dp2[i][j] = max(dp1[i][j], dp2[i][j]);
        }
    }

    dp1[a-1][0] = arr[a-1][0] + dp1[a-2][0];
    for(int i=1; i< b; i++) dp1[a-1][i] = max(dp1[a-2][i],dp1[a-1][i-1]) + arr[a-1][i];
}

void output(){
   if(check == false) printf("%d",dp1[a-1][b-1]);
}

int main() {
    input();
    process();
    output();
}