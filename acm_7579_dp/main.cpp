#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
typedef pair<int,int> PII;
vector<PII> total_arr;
vector<int> arr1;
vector<int> arr2;
int n,m,temp;
long long int dd=20000000;
long long int sub_total =0;
void input(){
    scanf("%d%d",&n,&m);
    for(int i=0; i< n; i++){
        scanf("%d",&temp);
        arr1.emplace_back(temp);
    }

    for(int i=0; i< n; i++){
        scanf("%d",&temp);
        arr2.emplace_back(temp);
    }

    for(int i=0; i< n; i++){
       total_arr.push_back({arr2[i],arr1[i]});
    }
}

long long int total = 0;
void output(){
    priority_queue<PII, vector<PII>, greater<PII>> PQ;
    for(int i=0; i< n; i++){
        if(total < m) {
            PQ.push(total_arr[i]);
            sub_total += total_arr[i].first;
            total += total_arr[i].second;
        }else{   // total >= m 일때
            cout <<"dd:" << dd << endl;
            dd = min(dd,sub_total);
            sub_total -= PQ.top().first;
            total -= PQ.top().second;
            if(!PQ.empty())PQ.pop();
        }
    }
    printf("%lld",dd);
}

int main() {
    input();
    output();
}