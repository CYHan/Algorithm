#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n,num,a,b,c;
int sum =0;
vector<bool>visited;
vector<int> arr[1003];
typedef pair<int,pair<int,int>> PII;
priority_queue<PII,vector<PII>,greater<PII>> PQ;
void input(){
    scanf("%d%d",&n,&num);
    for(int i=0; i< num; i++)                                 /// 우선순위큐로 노드 가중치 입력
        scanf("%d%d%d",&a,&b,&c), PQ.push({c,{--a,--b}});
}
int beg,ed,val=0;

bool cycle;
void mst(){
    while(!PQ.empty()){ cycle = false; visited.assign(n,0);   // 우선순위큐 순회
        beg = PQ.top().second.first; ed = PQ.top().second.second; val = PQ.top().first;
        PQ.pop();

        queue<int> Q;
        Q.push(beg);
        visited[beg] = true;
        while(!Q.empty()){

            int wow = Q.front();
            Q.pop();
            for(vector<int> :: iterator it = arr[wow].begin(); it != arr[wow].end(); it ++){
                if(!visited[*it]) {
                    visited[*it] = true;
                    if ((*it) == ed) {                  //// 사이클유무 확인
                        cycle = true;
                        break;
                    }
                    Q.push(*it);
                }
            }
        }
        if(cycle == false) {sum +=val;arr[beg].push_back(ed); arr[ed].push_back(beg);}  // 사이클이없으면 연결하고 가중치 추가


    }

}

void output(){
    printf("%d",sum);
}
int main() {
    input();
    mst();
    output();
}