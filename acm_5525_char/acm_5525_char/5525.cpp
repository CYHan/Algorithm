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
using namespace std;
char arr[1100000];
int num,p;
int counter = 0;
int sub = 0;
int tag = 0;

	



void output() {
	int two_num = 2*num;
	for (int i = 0; i < p; i++) {
		if (arr[i] == 'I') {
			for (int j = i+1; j < p-2; j+=2) {
				if (arr[j] == 'O' && arr[j + 1] == 'I') { sub++; }
				else break;
			}
			if (sub < num) { i = i + 2*sub ; sub = 0; }
			else {
				counter += (sub-num+1);
				i = i + 2 * sub ;
				sub = 0;
			}

		}
		

	}

	cout << counter << endl;

}

int main() {
	

	cin >> num >> p >> arr;
		
	

	output();

}