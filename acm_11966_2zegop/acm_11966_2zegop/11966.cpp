#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;
int num;
void input(istream& in) {

	in >> num;
}
bool tag = 0;
void output() {

	for (int i = 0; i <= 30; i++) {
		if(num / pow(2 , i) == 1) tag = "1";
	}
	cout << tag;
}
int main() {

	input(cin);
	output();
}