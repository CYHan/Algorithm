#include <iostream>
#include <string>
#include "Serial.h"

using namespace std;

int main(int argc, char* argv[])
{
	Serial * Arduino = new Serial("COM8");
	cout << "Communicating with COM7 enter data to be sent\n";
	char data[256] = "";
	int nchar = 256;
	char incomingData[256] = "";
	while (Arduino->IsConnected())
	{
		cin >> data;
		Arduino->WriteData(data, nchar);
		Arduino->ReadData(incomingData, nchar);
		cout << incomingData << endl;
	}
	return 0;
}