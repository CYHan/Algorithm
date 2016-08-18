
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef pair<long long int,long long int> PII;
vector<PII> arr;
vector<long long int> dp;
int num,a,b;
long long int max_height =0;
int temp;
int main() {
    scanf("%d", &num);

    for(int i=0; i< num; i++){
        scanf("%d%d",&a,&b);
        arr.push_back({a,b});
        dp.assign(num,0);
    }
    if(num==1){ printf("%d",2*abs(arr[0].second)) ; return 0;}
    sort(arr.begin(), arr.end());
    dp[0] = 2*abs(arr[0].second);
    max_height = max(abs(arr[2].second),(abs(arr[1].second),abs(arr[0].second)));
    dp[1] = max(abs(arr[0].first-arr[1].first),2*max(abs(arr[1].second),abs(arr[0].second)));
    if(num==2){ printf("%d",dp[1]) ; return 0;}
    dp[2] = max(abs(arr[0].first-arr[2].first),2*max(abs(arr[1].second),max(abs(arr[2].second),abs(arr[0].second))));
    if(num==3){ printf("%d",dp[2]) ; return 0;}
    //dp[3] = max(abs(arr[0].first-arr[2].first),2*max(abs(arr[2].second),abs(arr[0].second)));
    for(int i=3; i<num; i++){
        max_height = max(max_height,arr[i].second);
        temp = max(abs(arr[i-1].first-arr[i].first),2*max(abs(arr[i-1].second),abs(arr[i].second)));
        dp[i] = min(dp[i-1]+temp ,min(dp[i-2]+temp , max(abs(arr[i].first - arr[0].first),2*max(abs(arr[i].second),max_height))));
    }
    //for(int i=0; i< num; i++)  printf("%d\n", dp[i]);
    printf("%lld", dp[num-1]);
}


/*
#include<cstdio>
#include<algorithm>
using namespace std;
const int MAX_N = 1e4;
int n,dp[MAX_N+1];
pair<int, int> a[MAX_N+1];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <=n; i++) scanf("%d %d", &a[i].first, &a[i].second);
    sort(a+1, a+1 + n);
    for (int i = 1; i <= n; i++) {
        int maxi = 0;
        dp[i] = 1e9;
        for (int j = i; j >= 1; j--) {
            maxi = max(maxi, abs(a[j].second));
            dp[i] = min(dp[i], max(maxi*2,a[i].first-a[j].first) + dp[j - 1]);
        }
    }
    for(int i=0; i<=n ; i++)  printf("%d\n", dp[i]);
    //printf("%d", dp[n]);
    return 0;
}

*/