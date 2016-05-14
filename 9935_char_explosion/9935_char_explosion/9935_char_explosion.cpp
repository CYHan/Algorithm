#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
const int MAX_INPUT = 1000000;
const int MAX_INPUT2 = 36;
int main() {
	char a1[MAX_INPUT];
	char a2[MAX_INPUT2];
	//char a3[MAX_INPUT];
	stack<char> q;
	cin >> a1;
	cin >> a2;
	int stlen1,stlen2;
	stlen1 = strlen(a1);
	stlen2 = strlen(a2);
	
	for (int i = 0; i < stlen1; i++) {
		q.push(a1[i]);
		if (i >= stlen2 && q.top() == a2[stlen2 - 1]) {
			int count = 0;
			for (int j = 0; j < stlen2; j++) {
				
				if (a1[i - stlen2 + j+1] == a2[j]) {
					count++;
					cout << "+" << endl;
				}
				if (count == stlen2) {
					for (int k = 0; k < stlen2; k++) {
						q.pop();
					}
				}
			}
		}
		
	}

	for (int i = 0; i < q.size(); i++) {
		cout << "";
	}

	


}