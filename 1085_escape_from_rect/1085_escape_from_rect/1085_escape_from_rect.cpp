#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
using namespace std;
int main() {

	int input[5];
	int box[4];
	for (int i = 0; i < 4; i++) {
		cin >> input[i];
	}
	box[0] = input[0];
	box[1] = input[1];
	box[2] = input[2] - input[0];
	box[3] = input[3] - input[1];
	
	int wow = 1000000;
	for (int i = 0; i < 4; i++) {
		wow = min(wow, box[i]);
	}

	cout << wow;
	return 0;
}