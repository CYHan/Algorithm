#include<iostream>
#include <queue>
#include<string>
using namespace std;

int input=-1;
queue <int> myqueue;
//int push_input;
queue <int> push_in;
void push() {
	

	myqueue.push(push_in.front());
	push_in.pop();
	
}
void front() {
	int front_empty_number = -1;
	if (!myqueue.empty())
		cout << myqueue.front() << endl;
	else
		cout << front_empty_number << endl;
}
void back() {

	int back_empty_number = -1;
	if (!myqueue.empty())
		cout << myqueue.back() << endl;
	else
		cout << back_empty_number << endl;

}
void size() {
	cout << myqueue.size() << endl;
}


void empty() {
	if (!myqueue.empty())
		cout << int(0) << endl;
	else
		cout << int(1) << endl;
}
void pop() {
	if (!myqueue.empty()) {
		cout << myqueue.front() << endl;
		myqueue.pop();
	}
	else {
		cout << int(-1) << endl;
	}

}

vector <int> stack;
void Queue() {
	
	string input_string;
	int input_case;
	int push_input;
	for (int k = 0; k < input; k++) {
		
		cin >> input_string;
		if (input_string == "push") {
			input_case = 1;
			cin >> push_input;
			push_in.push(push_input);
			stack.push_back(input_case);
			
		}
		else if (input_string == "pop") {
			input_case = 2;
			stack.push_back(input_case);
			
		}
		else if (input_string == "size") {
			input_case = 3;
			stack.push_back(input_case);
			
		}
		else if (input_string == "empty") {
			input_case = 4;
			stack.push_back(input_case);
					
		}
		else if (input_string == "front") {
			input_case = 5;
			stack.push_back(input_case);
			
		}
		else if (input_string == "back") {
			input_case = 6;
			stack.push_back(input_case);
			
		}
		else {
			input_case = -1;
			
		}
		
	}



	for (int j = 0; j < stack.size(); j++) {
		switch (stack.at(j)) {

		case(1) : {
			push();
			break;
		}
		case(2) : {
			pop();
			break;
		}
		case(3) : {
			size();
			break;
		}
		case(4) : {
			empty();
			break;
		}
		case(5) : {
			front();
			break;
		}
		case(6) : {
			back();
			break;
		}
		case(-1) : {
			cout << "error" << endl;
			break;
		}


		}
	}

}


int main() {
	
	
	
	while (!(input >= 1 && input <= 10000)) {
		cin >> input;
	}
		
	Queue();




	return 0;
}