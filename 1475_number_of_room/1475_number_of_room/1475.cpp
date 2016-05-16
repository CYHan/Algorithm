#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
const int MAX_INPUT = 1000000;
const int NUMBER = 10;
int main() {
	char input[MAX_INPUT];
	int collection[NUMBER];
	cin >> input;
	//cout << int(input[0] - '0');
	int sizes = strlen(input);
	for (int i = 0; i < NUMBER; i++) {
		collection[i] = 0;
	}
	for (int i = 0; i < sizes; i++) {
		collection[input[i]-'0'] +=1;
	}
	
	//cout << ceil(((float)collection[6] + (float)collection[9]) / 2) << endl;
	collection[6] = ceil(((float)collection[6] + (float)collection[9])/2);
	


	sort(&collection[0], &collection[9]);


	cout << collection[8] << endl;



	return 0;
}