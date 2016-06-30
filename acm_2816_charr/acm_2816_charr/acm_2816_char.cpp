#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N;
vector<string> arr;
void input(istream& in) {
	in >> N;

	for (int i = 0; i< N; i++) {
		string a;
		in >> a;
		arr.push_back(a);
	}

}
int a1, a2;
void output() {

	for (int i = 0; i< arr.size(); i++) {
		if (arr.at(i) == "KBS1") a1 = i;
		if (arr.at(i) == "KBS2") a2 = i;
	}
	if (a2 > a1) {
		for (int i = 0; i < a2; i++) cout << "1";
		for (int i = 0; i < a2; i++) cout << "4";
		for (int i = 0; i < a1 + 1; i++) cout << "1";
		for (int i = 0; i < a1 + 1; i++) cout << "4";
	}
	else {
		for (int i = 0; i < a2; i++) cout << "1";
		for (int i = 0; i < a2; i++) cout << "4";
		for (int i = 0; i < a1; i++) cout << "1";
		for (int i = 0; i < a1; i++) cout << "4";
	}
}



int main() {
	input(cin);
	output();
	return 0;
}