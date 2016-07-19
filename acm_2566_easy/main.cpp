#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> arr[9];
int main() {
    int maxim =0;
    int temp;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d",&temp);
            arr[i].push_back(temp);
        }
    }
    for(int i=0; i<9; i++) {
        for (int j = 0; j < 9; j++) {
            {
                maxim = max(maxim, arr[i][j]);
            }
        }
    }
    for(int i=0; i<9; i++) {
        for (int j = 0; j < 9; j++) {
                if(maxim == arr[i][j]) {
                    printf("%d\n%d %d", maxim, i + 1, j + 1);
                    return 0;
                }
        }
    }

}