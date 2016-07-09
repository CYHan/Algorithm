#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
vector<char> str;
vector<int> container;
char temp[10000];


void input(istream& in) {
	
	string str_hex = "1+2=";
	cout << stoi(str_hex, nullptr, 16);



	while (1) {
		gets_s(temp);
		for (int i = 0; i < strlen(temp); i++) {
			str.push_back(temp[i]);
			for (int j = 0; j < strlen(temp); j++) {
				atoi(str);
				if(str[j] == ',')
			}
		}

		
	}
	
	
}

int method() {

	return 0;
}

int main() {

	input(cin);
	method();

}