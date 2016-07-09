#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;
vector<string> arr;
char temp[100000001];
void input(istream& in) {

	for (int i = 0; i < 4; i++) {
		in >> temp;
		arr.push_back(temp);
	}
}

int method() {
	long long wow1;
	long long wow2; 
	wow1 = stoi(arr[0])*pow(10, arr[1].size());
	wow2 = stoi(arr[2])*pow(10, arr[3].size());
	cout << wow1 + stoi(arr[1])+ wow2 + stoi(arr[3]) << endl;
	return 0;
}

int main() {

	input(cin);
	method();
}