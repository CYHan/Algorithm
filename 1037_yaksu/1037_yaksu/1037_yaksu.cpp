#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main() {
	int input;
	int inp[51];
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> inp[i];
	}
	sort(&inp[0],&inp[input]);
	cout << inp[0] * inp[input - 1];
	
	return 0;
}