#include <iostream>
#include<vector>
#include <algorithm>
#include <cstring>
#include<string>
#include<math.h>
#include<cstdio>
#include<stdlib.h>

using namespace std;
int a, b, c;
string temp;
int lower = 0;
int upper = 0;
int spaces = 0;
int num = 0;
vector<string> arr;
int main() {
	for (int i = 0; i< 100; i++) {
		lower, upper, spaces, num = 0;
		getline(cin, temp);
		for (int j = 0; j<temp.size(); j++) {
			if (int(temp[j] - 'A') >= 0 && int(temp[j] - 'A') <26) {
				upper += 1;
			}
			else if (int(temp[j] - 'a') >= 0 && int(temp[j] - 'a') <26) {
				lower += 1;
			}
			else if (int(temp[j] - '0') >= 0 && int(temp[j] - '0') <10) {
				num += 1;
			}
			else {
				spaces += 1;
			}
		}
		cout << lower << " " << upper << " " << num << " " << spaces << endl;
	}

}