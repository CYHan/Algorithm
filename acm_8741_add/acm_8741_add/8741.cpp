#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<cstring>
#include<math.h>
#include<algorithm>
using namespace std;
long int num;
int sum;

void input(istream& in) {
	in >> num;
	//sum = (pow(2, num)-1)*(pow(2, num)) / 2;
}


//long int mok, mod;


//long long int counter = 0;
void output() {

	for (int i = 0; i < num; i++) {
		cout << "1";
	}
	for (int i = 0; i < num-1; i++) {
		cout << "0";
	}
	//cout << sum << endl;
	
	//while(1){
	//	mod = sum % 2;
	//	sum = sum / 2;
	//	cout << mod;
	//	if (sum <= 0) break;
	//}
	

	
	


}

int main() {
	input(cin);
	output();


}
