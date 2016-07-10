#include <iostream>
using namespace std;

int n,m;
int arr[101];
int a,b,temp;
void input(){

    scanf("%d%d",&n,&m);
    for(int i=0; i<= n; i++){
        arr[i] =0;
    }
    for(int i=0; i< m; i++){
        scanf("%d%d%d",&a,&b,&temp);
        for(int j=a ; j<=b; j++){
            arr[j] = temp;
        }
    }
}
void output(){
    for(int i=1; i<=n; i++){
        printf("%d ", arr[i]);
    }

}

int main() {
    input();
    output();
    return 0;
}