#include<iostream>
#include<string>
#include<vector>
using namespace std;
int n, m,a,b;
int arr[1001][1001];
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a-1][b-1] = arr[b-1][a-1] = 1;
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum += arr[i][j];
		}
		cout << sum << endl;
		sum = 0;

	}

	return 0;
}