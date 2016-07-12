#include <iostream>

using namespace std;

int a,b,c;
int main() {
    cin >> a >> b >> c;
    int temp;
    temp = a*b -c;
    if (temp > 0) cout << temp;
    else cout << "0";
}