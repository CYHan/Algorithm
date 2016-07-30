#include <iostream>
#include <algorithm>
#include<vector>
#include <string>
#include <stdlib.h>
#include <map>
#include <math.h>
#include <stack>
using namespace std;
int num;
bool wow ;
string str;
int main(){
    cin >> num;
    for(int i=0; i< num; i++){
        cin >> str;
        stack<int> st;wow = false;
        for(int i=0; i< str.size(); i++){
            if(str[i] == '(') st.push(str[i]);
            else if(str[i] == ')') {
                if(!st.empty() && st.top()=='(') st.pop();
                else {cout << "NO" << endl; wow= true; break;}
            }

        }
        if(wow == false) {
            if (st.empty()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

}


