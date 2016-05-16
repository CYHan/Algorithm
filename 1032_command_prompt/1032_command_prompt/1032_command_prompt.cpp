#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int A = 51;
const int B = 51;
int main() {

	int input;
	char st[A][B];
	int stamp[A];
	cin >> input;
	int pointer;
	for (int i = 0; i < input; i++) cin >> st[i];
	
	for (int j = 0; j < strlen(st[0]) ; j++) {
		stamp[j] = 1;
		for (int i = 0; i < input-1 ; i++) {
			if ((st[i][j] != st[i + 1][j])) {
				stamp[j] = 0;
			}
		}
	}
	for (int i = 0; i < strlen(st[0]); i++) {
		if (stamp[i] == 1 && (st[0][i] == '.')) { cout << "."; }
		else if (stamp[i] == 0 ) { cout << "?"; }
		else if(stamp[i] == 1) { cout << st[0][i]; }
	}

	return 0;
}