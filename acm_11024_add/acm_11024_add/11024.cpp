#include<iostream>
#include<string>
#include<cstdio>
#include<stdio.h>
using namespace std;
int num=1;
string s;
int total=0;
char a; 

void input(istream& in) {
	cin >> num;
	cin.ignore(256, '\n');
	for (int i = 0; i < num; i++) {
		getline(cin, s);    //// c 에서는 gets 를 사용해서 한줄 씩 받을 수 있다. char[20] 선언해놓고 그걸 gets(s) 이런식으로 받으면됨
		for (int j = 0; j < s.size(); j++) {
			if (j%2==0) {
				total += atoi(&s[j]);
			}
		}
		cout << total << endl;
		total = 0;
		
	}
	

}


int main() {

	input(cin);



}
