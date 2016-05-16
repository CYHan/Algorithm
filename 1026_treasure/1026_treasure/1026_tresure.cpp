#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int A[50];
int B[50];
int s = 0;
int main() {
	int input;
	cin >> input;
	
	for (int i = 0; i < input; i++) cin >> A[i];
	for (int i = 0; i < input; i++) cin >> B[i];
	sort(&A[0], &A[input]);
	sort(&B[0], &B[input]);
	for (int i = 0; i < input; i++) s += A[i]*B[input-i-1];

	cout << s;

}