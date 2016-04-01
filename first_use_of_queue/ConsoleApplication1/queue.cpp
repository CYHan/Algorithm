#include<iostream>
#include<queue>
using namespace std;
void main() {
	queue<int> Queue;
	for (int i = 0; i < 10; i++) {
		Queue.push(i);
	}
	cout << Queue.front() << endl;
	Queue.pop();
	cout << Queue.front() << endl;
}