//please refer to http://playground.arduino.cc/Interfacing/CPPWindows#.UyimLqiSwQ0 for more information
//please refer to http://msdn.microsoft.com/en-us/library/ff802693.aspx for more information
//#include "Serial.h"	// Library header to be included
#include "SerialUtil.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Don't forget to handle exceptions and throw suitable messages as we are dealing with serial read/write
	try {
		//create an instance of SerialUtil object
		SerialUtil* su = new SerialUtil();
		string str;
		while (SerialUtil::SP->IsConnected())
		{
			//read string from commandLine
			getline(cin, str);
			//write the string read from commandLine
			su->write(str);
		}
	}
	catch (string s)
	{
		cout << "..ERROR OCCURED::" << s << " :( \n";
	}
	return 0;
}