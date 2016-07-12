#include <iostream>
#include<stack>
using namespace std;
int arr[101];
int n,m;
stack<int> st;
int main() {
    cin >> n >> m;
    for(int i=0 ;i<=n; i++){
        arr[i] = i;
    }
    int a,b,temp;

    for(int i=0; i< m; i++){
        cin >> a >> b;
        for(int j=a; j<=b; j++){
            st.push(arr[j]);
        }

        for(int j=a; j<=b; j++){
            arr[j] = st.top();
            st.pop();
        }
    }
    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}