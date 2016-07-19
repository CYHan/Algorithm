#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int counter =0;
    int temp;
    int min =100;
    int total =0;
    for(int i=0;i<7; i++){
        scanf("%d",&temp);
        if(temp%2 ==1 ){
            total += temp;
            counter +=1;
            if(min>temp) min = temp;
        }
    }
    if(counter ==0 ){
        printf("-1");
    }else {
        printf("%d\n%d", total, min);
    }
}