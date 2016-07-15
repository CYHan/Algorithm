#include <iostream>
#include<vector>
#include <algorithm>
#include <cstring>
using namespace std;
int a,b,c;
string temp;
int lower;
int upper;
int spaces;
int num ;
vector<string> arr;
int main() {
     for(int i=0; i< 100; i++) {
          getline(cin, temp);
          lower=0; upper=0; num =0; spaces =0;
          for(int j=0; j<temp.size(); j++){
           if(int(temp[j]-'A') >=0 &&int(temp[j]-'A') <26){
                upper+=1;
           }else if(int(temp[j]-'a') >=0 &&int(temp[j]-'a') <26) {
                lower+=1;
           }else if(int(temp[j]-'0') >=0 &&int(temp[j]-'0') <10) {
                num+=1;
           }else{
                spaces +=1;
           }
          }
          if(lower+upper+num+spaces == 0) return 0;
          cout << lower << " " << upper << " "<< num << " " << spaces << endl;

     }

}