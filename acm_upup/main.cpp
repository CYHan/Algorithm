#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int a,b;
int main() {
    cin >> a >> b;
    vector<string> c,d;
    string str;
    for(int i=0; i<a; i++) cin>> str, c.emplace_back(str);
    for(int i=0; i<b; i++) cin>> str, d.emplace_back(str);
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    for(int i=0; i< (c.size() >= d.size())? d.size():c.size() ; i++){
        if(c[i] == d)
    }
}