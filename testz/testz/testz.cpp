#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
using namespace std;
vector<int> arr[100002];
int num, temp, wow;
void method() {
	for (int i = 0; i< temp - 2; i += 2) {  // È¦¼öÀÏ¶§
		if (i>temp - 1) break;
		arr[0][i + 2] = max((arr[0][i] + arr[1][i + 1] + arr[0][i + 2]), (arr[1][i] + arr[0][i + 2]));
		arr[1][i + 2] = max((arr[1][i] + arr[0][i + 1] + arr[1][i + 2]), (arr[0][i] + arr[1][i + 2]));
	}
	/*  for(int i=0; i<2; i++){
	for(int j=0; j< temp; j++){
	cout << arr[i][j] << " ";
	}
	cout << endl;
	}
	*/

	if (temp % 2 == 1) { printf("%d\n", max(arr[0][temp - 1], arr[1][temp - 1])); }//È¦¼öÀÏ¶§
	else { printf("%d\n", max((arr[0][temp - 2] + arr[1][temp - 1]), (arr[1][temp - 2] + arr[0][temp - 1]))); } //Â¦¼öÀÏ¶§

	for (int i = 0; i<2; i++) {
		arr[i].clear();
	}
}
void input() {
	scanf("%d", &num);
	for (int i = 0; i< num; i++) {
		scanf("%d", &temp);
		for (int k = 0; k < 2; k++) {
			for (int j = 0; j < temp; j++) {
				scanf("%d", &wow);
				arr[k].push_back(wow);
			}
		}

		method();

	}
}
int main() {
	input();
}