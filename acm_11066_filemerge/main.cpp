#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int num, temp1,temp2;
vector<int> arr;
int cal;


void process(){
    sort(arr.begin(),arr.end());
    for(int i=0; i< temp1; i++){
        cal = arr[0]+ arr[1];
        if(arr[2] <= cal && arr[3] > cal){
            arr[]
        }
    }

    arr.clear();
}
int main() {
    scanf("%d",&num);
    for(int i=0; i< num; i++){
        scanf("%d",&temp1);
        for(int j=0; j<temp1; j++){
            scanf("%d", &temp2);
            arr.push_back(temp2);
        }
        process();
    }
}