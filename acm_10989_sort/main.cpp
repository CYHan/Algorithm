#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int num;
short temp;
int arr[10001];
void input(){
    for(int i=0; i< 10001; i++){
        arr[i] = 0;
    }

    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d", &temp);
        arr[temp] +=1;
    }
}

void output(){
    for(int i=1; i< 10001; i++){
        for(int j=0; j< arr[i]; j++){
            printf("%d\n",i);
        }
    }

}


int main() {
    input();
    output();
    return 0;
}