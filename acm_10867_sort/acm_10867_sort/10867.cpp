#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int num;
vector<int> arr;
int temp;
void input(istream& in) {
	in >> num;
	for (int i = 0; i < num; i++) {
		in >> temp;
		arr.push_back(temp);
	}
}
int method() {

	sort(arr.begin(), arr.end());
	int wow;
	wow = arr[0];
	cout << arr[0] << " "; 
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] == wow) continue;
		else {
			cout << arr[i] << " ";
			wow = arr[i];
		}	
	}
	return 0;
}


int main() {
	input(cin);
	method();

}