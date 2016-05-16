#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include <cstring>
using namespace std;
const int MAX_INPUT = 100000;
const int MAX_INPUT2 = 37;
int main() {
	char a1[MAX_INPUT];
	char a2[MAX_INPUT2];
	int pointer = 0;
	char stack[MAX_INPUT];
	cin >> a1;
	cin >> a2;
	int stlen1,stlen2;
	stlen1 = strlen(a1);
	stlen2 = strlen(a2);
	
	for (int i = 0; i < stlen1; i++) {
		stack[pointer++] = a1[i];
		if (i >= stlen2-1 && stack[pointer-1] == a2[stlen2 - 1]) {
			int count = 0;
			for (int j = 0; j < stlen2; j++) {
				if (stack[pointer - j -1] == a2[stlen2 - 1 - j]) {
					count += 1;
				}
			}
			if (count == stlen2) {
				for (int k = 0; k < stlen2; k++) {
					pointer-=1;
				}
				
			}
		}
		
	}

	for (int i = 0; i < pointer; i++) {
		cout << stack[i];
	}
	if (pointer == 0) {
		cout << "FRULA" << endl;
	}

	


}