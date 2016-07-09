#include<iostream>
#include<string>
#include<vector>
using namespace std;
int num;
int sum = 0;
void input(istream& in) {
	int a, b, temp;
	in >> num;
	for (int i = 0; i < num; i++) {
		in >> a >> b;
		if (a <= b) {
			temp = b / a;
			sum += (b - temp*a);

		}
		else {
			sum += b;
		}
	}
}

int method() {
	cout << sum << endl;


	return 0;
}
int main() {

	input(cin);
	method();
}