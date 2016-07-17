#include <iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cstring>
#include<stdlib.h>
#include<algorithm>
using namespace std;
string str="";
string strtemp="";
int sum =0;
string temp ="";
int counter =0;
int main() {
     int wow;
     while (1) {
          getline(cin, strtemp);
          str += strtemp;
          counter += 1;
          if (strtemp.size() <1) {
               // getline(cin , str);
               for (int i = 0; i < str.size(); i++) {
                    temp += str[i];
                    //  cout << temp << endl;
                    if (str[i + 1] == ',') {
                         // cout << stoi(temp) << endl;
                         sum += stoi(temp);
                         temp = "";
                         i += 1;
                    }
                    if (i == str.size() - 1)
                         // cout << stoi(temp) << endl;
                         sum += stoi(temp);

               }
               cout << sum;
               return 0;
          }
     }
}