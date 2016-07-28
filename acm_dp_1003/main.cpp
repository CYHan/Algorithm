#include <iostream>

using namespace std;

int zero_cnt=0;
int one_cnt =0;
int num;
int temp;
int fibonacci(int n) {
    if (n==0) {
        //printf("0");
        zero_cnt +=1;
        return 0;
    } else if (n==1) {
       // printf("1");
        one_cnt+=1;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    cin >> num;
    for(int i=0; i<num ; i++){
        cin >> temp;
        fibonacci(temp);
        cout << zero_cnt << " " << one_cnt << endl;
        zero_cnt=0; one_cnt=0;
    }
}