#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> arr;
int main() {
	int a;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a);
		arr.push_back(a);
	}
	int maxim = 0;
	for (int i = 0; i < 9; i++) {
		maxim = max(arr[i], maxim);
	}
	for (int i = 0; i < 9; i++) {
		if (arr[i] == maxim)
			printf("%d\n%d", maxim, i + 1);
	}
	


}