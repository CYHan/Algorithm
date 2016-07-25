#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
int num;
string a,b,c,d,temp;
char wow[1000000];
vector<string> arr;
char buf[1000000];
int main() {
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        cin >> a >> b >> c >> d;
        temp = a+b+c+d;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    f

}