#include<iostream>
#include<string>
#include<vector>
using namespace std;
string buffer;
string str;
int num;
int width;
int mat[2000][2000];
int alpha[26][26];

void input(istream& in) {
	in >> num;
	in.ignore(256,'\n');
	in >> str;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			alpha[i][j] = 0;
		}
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			mat[i][j] = 0;
		}
	}
	for (int i = 0; i < num-1; i++) {
		if (alpha[int(str[i] - 'a')][int(str[i + 1] - 'a')] >0) {
			mat[i][i+1] = 1;
		}
		else {
			mat[i][i + 1] = 0;
		}
		alpha[int(str[i]-'a')][int(str[i+1] - 'a')]+=1;
		
	}

}

void output() {
	for (int i = num-2; i >= 0; i--) {
		for (int j = i+2; j < num; j++) {
			mat[i][j] = mat[i + 1][j] && mat[i][j - 1];
		}
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < num; i++) {
		for (int j = num - 1; j > num - i-2; j--) {
			if (mat[i][j] == 1)
			{
				cout << (j-i + 1) << endl;
				return ;
			}
		}
	}


	
}



int main() {
	input(cin);
	output();
}