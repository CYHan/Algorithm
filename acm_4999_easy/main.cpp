#include <iostream>
#include <string>
#include <vector>

using namespace std;
string a,b;
int maxim=0;
int arr[4002][4002];
int main() {
    cin  >> a >> b;
    for(int i=0;i<a.length(); i++){
        for(int j=0; j< b.length(); j++){
            if(i==0 || j==0) {
                arr[i][j] = 0;
                continue;
            }

            if(a[i] == b[j]) {
                arr[i][j] = arr[i - 1][j - 1]+1;
                maxim = max(maxim,arr[i][j]);
            }
            else arr[i][j] =0;
        }
    }


    cout << maxim << endl;
}