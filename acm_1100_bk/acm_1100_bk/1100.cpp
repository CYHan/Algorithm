#include<iostream>
#include<string>
#include<vector>
using namespace std;
string a;
vector<string> arr;
int counter = 0;
void input(istream& in) {
	for (int i = 0; i < 8; i++) {
		in >> a;
		arr.push_back(a);
		
	}

}

void output() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i%2 ==0 &&j % 2 == 0 && arr[i][j] == 'F') {
				counter += 1;
			}else if (i % 2 != 0 && j % 2 != 0 && arr[i][j] == 'F') {
				counter += 1;
			}
		}
	}

	cout << counter << endl;

}


int main() {

	input(cin);
	output();
}

