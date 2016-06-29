#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stack>
#include <tuple>
#include <set>
#include <string>
using namespace std;


int main() {
	string t;
	getline(cin, t);
	int N = stoi(t);
	for (int i = 0; i<N; i++) {
		string tmp;
		getline(cin, tmp);
		string acc = "";
		vector<string> bag;
		for (auto& it : tmp) {
			if (it == ' ') {
				bag.push_back(acc);
				acc = "";
			}
			else {
				acc += it;
			}
		}
		bag.push_back(acc);
		int sum = 0;
		for (auto& it : bag) {
			sum += stoi(it);
		}
		cout << sum << endl;
	}
	return 0;
}