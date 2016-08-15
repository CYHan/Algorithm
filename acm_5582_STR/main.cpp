#include <iostream>
#include <string>
#include <vector>

using namespace std;
string a,b;
int w1,w2;
int maxim=0;
int arr[4002][4002];
int main() {
    cin  >> a >> b;
    w1 = a.length();
    w2 = b.length();
    for(int i=0; i< w1; i++) arr[i][0] = 0;
    for(int i=0; i< w2; i++) arr[0][i] = 0;
    for(int i=1;i<=w1; i++){
        for(int j=1; j<= w2; j++){


            if(a[i-1] == b[j-1]) {
                arr[i][j] = arr[i - 1][j - 1]+1;
                maxim = max(maxim,arr[i][j]);
            }
            else arr[i][j] =0;
        }
    }


    cout << maxim << endl;
}