#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;
int row,col,temp;
int arr[1001][1001];
void input(istream& in){
    scanf("%d%d",&row,&col);
    for(int i=0; i< row+1; i++)
        for(int j=0; j< col+1; j++)
            arr[i][j] = 0;

    for(int i=0; i< row; i++){
        for(int j=0; j< col; j++){
            scanf("%d",&temp);
            arr[i+1][j+1] = max (arr[i+1][j]+temp,arr[i][j+1]+temp) ;
        }
    }
}
int method(){


    printf("%d",arr[row][col]) ;
    return 0;
}
int main() {
    input(cin);
    method();
}