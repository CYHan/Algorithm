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
#include <string>
using namespace std;
string arr;
char key[40000];
int counter = 0;
void input(istream& in) {
	getline(in,arr);
	
	in >> key;
	
	for (int i = 0; i < arr.size(); i++) {
		//�����ΰ��
		if (arr.at(i) == ' ') { cout << " "; }
		//a���� ũ�Ű� �������
		else if (int(arr.at(i) - key[counter]) > 0){
			cout << char('a' + (arr.at(i) - key[counter])-1);
		}
		//a���� �������
		else if (int(arr.at(i) - key[counter]) <= 0) {
			cout << char('z' - (key[counter] - arr.at(i)));
		}

		counter += 1;
		if (counter == strlen(key))
			counter = 0;
		
	}
	
}
int main() {
	input(cin);

}