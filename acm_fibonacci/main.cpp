#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef pair<long long int, long long int> PII;
int temp,num;
vector<PII> arr;
int main() {
    cin >> temp;
    num = temp-2;
    if(num <=0) cout << "1" << endl;
    arr.push_back({1,0});
    for(int i=1; i <=num; i++) arr.push_back({arr[i-1].first+arr[i-1].second,arr[i-1].first});
    printf("%lld",arr[arr.size()-1].first+arr[arr.size()-1].second);
}




//2880067194370816120