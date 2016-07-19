#include <iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<cstdio>
#include<math.h>
#include<cstring>
#include<string>
using namespace std;
int main() {
    int temp;
    int sum= 0;
    vector<int> arr(10);
    vector<int> check(1001,0);
    for(int i=0; i <10; i++){
        cin >> temp;
        sum += temp;
        arr[i] = temp;
        check[arr[i]]+=1;
    }

    cout << sum/10 << endl;
    int maxim =0;
    int M_counter =0;
    for(int i=0; i<1001; i++){
        if(maxim < check[i]){
            maxim = check[i];
            M_counter = i;
        }
    }
    cout << M_counter;




}