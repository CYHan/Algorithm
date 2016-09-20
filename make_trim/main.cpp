#include <iostream>
#include <string>
using namespace std;


void substitute(string& str,const string changed_string, const string changed_string2) {
    while (int position = str.find(changed_string)) {
        str.replace(position, sizeof(changed_string2), changed_string2);
    }
}



int main() {
    string str,str2,str1;
    cin >> str >> str1 >>str2;
    substitute(str,str1,str2);
    cout <<  str;
    return 0;
}