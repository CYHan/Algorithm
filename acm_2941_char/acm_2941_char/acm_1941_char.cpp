#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;
string inparr;
string fixedarr[8];
void input(istream& in) {
	fixedarr[0] = "c="; fixedarr[1] = "c-"; fixedarr[2] = "dz=";
	fixedarr[3] = "d-"; fixedarr[4] ="lj"; fixedarr[5] = "nj";
	fixedarr[6] = "s="; fixedarr[7] = "z=";
	
	in >> inparr;

}

void output() {
	string a;
	int total = 0;
	int flag;
	for (int i = 0; i < inparr.size(); i++) {
		flag = 0;
		a = inparr.substr(i, 2);
		for (int j = 0; j < 8; j++) {
			if (fixedarr[j] == a) {
				total += 1;
				i += 1;
				flag = 1;
			}
			if (inparr.substr(i,3) == "dz=") {
				i += 2;
				flag = 1;
				total += 1;
			}
		}
		if (flag == 0)  total += 1;
		
	}

	cout << total;
}
int main() {

	input(cin);
	output();

}