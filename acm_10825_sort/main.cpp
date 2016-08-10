#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
int num,b,c,d,temp;
char a[11];
typedef pair<int, string> PIS;
vector<PIS> arr;

int main() {
    scanf("%d",&num) ;
    for(int i=0; i< num; i++){
        scanf("%s",a);
        scanf("%d%d%d",&b,&c,&d);
        temp = -(b*10000 + (100-c)*100 + d);
        arr.emplace_back(temp,a);
    }
    sort(arr.begin(),arr.end());

    for(vector<PIS>::iterator it = arr.begin(); it!= arr.end(); it++){
        printf("%s\n",it->second.c_str());
    }

}