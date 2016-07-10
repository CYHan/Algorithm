#include <iostream>
#include <vector>
#include<string>
#include<cstdio>
using namespace std;
int num1,num2,temp;
bool veri_posi[10000099];
bool veri_nega[10000099];
bool zer = false;
void input(istream& in){

    scanf("%d", &num1);
    for(int i=0; i< num1; i++){
        scanf("%d",&temp);
        if(temp >0){
            veri_posi[temp] = true;
        }else if(temp <0){
            veri_nega[(-1)*temp] = true;
        }else{
            zer = true;
        }
    }
}
int method(){
    scanf("%d",&num2);
    for(int i=0; i < num2; i++){
        scanf("%d",&temp);
        if(temp >0){
            if(veri_posi[temp] == true) {printf("1 ");}
            else{printf("0 ");}
        }else if(temp <0){
            if(veri_nega[(-1)*temp] == true) {printf("1 ");}
            else{printf("0 ");}
        }else{
            if(zer == true){
                printf("1 ");
            }else{
                printf("0 ");
            }
        }
    }

    return 0;
}

int main() {
    input(cin);
    method();

    return 0;
}