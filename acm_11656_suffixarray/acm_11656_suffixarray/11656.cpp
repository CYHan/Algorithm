#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;

vector<string> arr;
string str;

void input(istream& in) {
	in >> str;
	for (int i = 0; i < str.size(); i++) 
		arr.push_back(str.substr(i, str.size()-i));
}

int method() {
	sort(arr.begin(), arr.end());
	for (vector<string>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}
int main() {
	
	input(cin);
	method();


}