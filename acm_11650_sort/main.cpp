#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int num, a, b;
typedef pair<int,int> PII;
PII temp;
priority_queue<PII, vector<PII>, greater<PII>> PQ;
int main() {
    scanf("%d",&num);
    for(int i=0; i< num; i++){
        scanf("%d%d",&a,&b);
        PQ.push({a,b});
    }
    while(!PQ.empty()){
        temp = PQ.top();
        printf("%d %d\n", temp.first , temp.second );
        PQ.pop();
    }
}