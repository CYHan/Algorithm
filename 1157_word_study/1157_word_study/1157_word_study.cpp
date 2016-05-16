#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAX_SIZE = 1000000;
int main() {
	//A 65 a 97
	char input[MAX_SIZE];
	int buffer[26];
	for (int i = 0; i < 26; i++)buffer[i] = 0;
	cin >> input;
	int sizes = strlen(input);
	for (int i = 0; i < sizes; i++) {
		if (input[i] >= 'A'&&  input[i] < 'a') {
			buffer[int(input[i]) - 'A'] += 1;
		}
		else
			buffer[int(input[i]) - 'a'] += 1;
	}

	int count = 0; int wow = 0; int index = 0;
	for (int i = 0; i < 26; i++) { wow = max(wow, buffer[i]);}
	for (int i = 0; i < 26; i++) {
		if (wow == buffer[i]) { count += 1; index = i;  }
	}
	if (count > 1) { cout << "?"; }
	else {
		cout << char(index+'A');
	}

	return 0;
}