
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const long long MOD = 1000000000;
int num;
vector<long long>marking(10,0);
vector<long long>temp(10,0);
int main() {
    cin >> num;
    for(int i=1; i< 10; i++) marking[i] +=1;
    temp = marking;
    for(int k=0; k<num-1; k++) {
        if(num == 1) break;
        marking.assign(10, 0);
        for (int i = 0; i < 10; i++) {
            if(i-1 >= 0)marking[i - 1] = marking[i-1]%MOD+ temp[i]%MOD;
            if (i + 1 <= 9) marking[i + 1] = marking[i+1]%MOD+ temp[i]%MOD;
        }
        temp = marking;
    }

    long long sum =0;
    for(int i=0; i< 10; i++){
        sum = sum%MOD + marking[i]%MOD;
    }
    cout << sum%MOD << endl;

}