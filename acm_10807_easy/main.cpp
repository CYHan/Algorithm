#include <iostream>
#include<vector>


using namespace std;

int main() {
    int n,temp,m;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> m;
    int counter=0;
    for(int i=0; i<n; i++){
        if(arr[i] == m) counter +=1;
    }
    cout << counter;
    return 0;
}