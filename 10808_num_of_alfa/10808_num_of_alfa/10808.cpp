#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	string aa;
	int score[100];
	for (int i = 0; i < 26; i++) {
		score[i] = 0;
	}
	cin >> aa;
	for (int i = 0; i < aa.size(); i++) {	
		score[int(aa.at(i)) - 97] += 1;
	}
	
	for (int i = 0; i < 26; i++) {

		cout << score[i] << " ";
	}
	
	return 0;
}
