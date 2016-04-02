#include<iostream>
#include<utility>
#include<string>
#include<vector>
using namespace std;

int main() {

	pair<string,int> myPair("hello", 10);
	pair<string, int> myPair2;
	myPair2.first = "hello";
	myPair2.second = 10;
	

	myPair2 = make_pair("world", 5);

	vector <pair<string, int>> vec;

	for (int i = 0; i < 5; i++) {
		vec.push_back(make_pair("hello",i));
	}
}