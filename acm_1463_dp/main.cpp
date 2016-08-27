#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num;
int temp;
int i=0;
vector<int> arr[100000];
int main() {
    scanf("%d",&num);
    if(num == 1 ) {
        printf("0");
        return 0;
    }
    temp = num;
    if(temp%3 == 0) arr[i].emplace_back(temp/3);
    if(temp%2 == 0) arr[i].emplace_back(temp/2);
    arr[i].push_back(temp-1);
    while(temp !=1){
        for(vector<int>::iterator it = arr[i].begin(); it!= arr[i].end(); it++ ){
            temp = *it;
            if(temp == 1) {
                printf("%d",i+1);
                return 0;
            }
            if(temp%3 == 0) arr[i+1].emplace_back(temp/3);
            if(temp%2 == 0) arr[i+1].emplace_back(temp/2);
            arr[i+1].emplace_back(temp-1);
        }
        i+=1;
    }
}