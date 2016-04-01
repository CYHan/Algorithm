#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<cmath>
#include<ctype.h>

int main() {
	//cout << pow(10,2) << endl;
	string a="";
	int count = 0; 
	char ci = '';
	vector<string> input_string;
	vector<char> each_input;
	vector<int> sizes;
	int sipa = 1;
	int sipa2 = 2;
	while (!(count <= 10 && count >= 1)) {
		//cout << "°¹¼ö ÀÔ·Â" << endl;
		cin >> count;
	}
	int alpha[25];
	int total = 0;

	for (int b = 0; b < count; b++){
		
		
		for (int q = 0; q < a.size(); q++) {
			ci= a.at(q);
			cin >> a;
		}

		
		input_string.push_back(a);
		a = "";
		sizes.push_back(input_string.at(b).size());
	}

	int wow = 9;

	
	for (int w = 10; w > 0; w--) {
		for (int z = 0; z < sizes.size(); z++) {
			if (w == input_string.at(z).size()) {
				// << input_string.at(z).at(0) << endl;
				
				if (!(alpha[int(input_string.at(z).at(0) - 65)] < 10 && alpha[int(input_string.at(z).at(0) - 65)] >= 0)) {
					total += (wow * pow(10,w-1));
					//cout << (wow * pow(10,w-1)) << endl;
					alpha[int(input_string.at(z).at(0) - 65)] = wow;
					wow -= 1;
					//cout << "wow" << endl;
					
				}
				else {
					//cout << (alpha[int(input_string.at(z).at(0) - 65)] * pow(10, w - 1)) << endl;
					total += (alpha[int(input_string.at(z).at(0) - 65)] * pow(10, w - 1));
					
				}
				input_string.at(z).erase(input_string.at(z).begin());
			}
	
		}
	}


	cout << total << endl;
	return 0;
}