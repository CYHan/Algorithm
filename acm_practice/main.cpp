#include <iostream>
#include <algorithm>
#include<vector>
#include <string>
#include <stdlib.h>
#include <map>
#include <math.h>
#include <stack>

using namespace std;
int a,b,num,N;
bool wow ;
string str;
int main() {
    cin >> N;
    if(N%2 == 1) cout << "0" << endl;
    else cout << pow(3,N-1) + pow(2,N-2) << endl;

}


