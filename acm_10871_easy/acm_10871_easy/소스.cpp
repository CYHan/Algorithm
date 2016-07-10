#include<iostream>
#include<vector>
using namespace std;

int num;
int num2;
int temp;
void input(istream& in) {
	in >> num >> num2;
	
}

int method() {
	cout << num*num2;


	return 0;
}


int main() {

	input(cin);
	method();
}