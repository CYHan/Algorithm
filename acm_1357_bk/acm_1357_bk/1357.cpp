#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stack>
#include <tuple>
#include <set>
using namespace std;
char a[10];
char b[10];
char a1[10];
char b1[10];
char c[10];

void input(istream& in) {
	in >> a >> b;


	for (int i = 0; i < strlen(a); i++) {
		a1[i] = a[strlen(a) - 1 - i];
	}
	for (int i = 0; i < strlen(b); i++) {
		b1[i] = b[strlen(b) - 1 - i];
	}
}

void output() {
	int temp = 0;
	char temp2[10];
	char temp3[10];
	//cout << "1:"<< atoi(a1) << endl;
	//cout << "2:"<<atoi(b1) << endl;
	temp = atoi(a1) + atoi(b1);
	//cout << temp << endl;
	snprintf(temp2, 10, "%d", temp);
	for (int i = 0; i < strlen(temp2); i++) {
		
			temp3[i] =  temp2[strlen(temp2) - i - 1];
		
	}
	cout << atoi(temp3);

}

int main() {

	input(cin);
	output();

}