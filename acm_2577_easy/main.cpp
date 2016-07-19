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
    int a,b,c;
    vector<int> arr;
    cin >> a >> b >> c;
    int temp;
    temp = a*b*c;


    for(int i=0; i<10; i++){
        arr.push_back(0);
    }
    int temp2;
    for(int i=0 ; i<10; i++){
        if(temp>0) {
            temp2 = temp % 10;
            arr[temp2] += 1;
            temp = (temp - temp2) / 10;
        }else break;
    }

    for(int i=0; i< 10; i++){
        cout << arr[i] << endl;
    }



}