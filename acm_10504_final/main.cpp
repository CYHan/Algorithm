#include <iostream>
#include<queue>
#include<vector>
using namespace std;
long int num,temp;
int counter =0;
int sum =0;
bool stamp = 0;

void output_s(int j){
    printf("%d = ",temp);
    for(int i=0; i< counter-1; i++){
        printf("%d + ",j+i);
    }
    printf("%d\n",j+counter-1);
}

int main() {
    int ww ;

    scanf("%d",&num);
    for(int i=0; i < num; i++){
        counter =0;sum =0; ww = 3; stamp =0;
        scanf("%d", &temp);
        if(temp%2 ==0 &&temp >=6) {
            sum = temp/3 + temp/3 + temp/3;
            if(sum == temp){
                printf("%d = %d + %d + %d\n",temp, temp/3 -1,temp/3 , temp/3 +1 );
                stamp = 1;
                continue;
            }

            int temp2 = temp%4;
            sum =  (temp/4 + temp2) + (temp/4 + temp2-1) +(temp/4 + temp2-2) +(temp/4 + temp2-3);
            if(sum == temp){
                printf("%d = %d + %d + %d + %d\n",temp, (temp/4 + temp2-3), (temp/4 + temp2-2), (temp/4 + temp2-1),(temp/4 + temp2) );
                stamp = 1;
                continue;
            }
            sum = 5* (temp/5);
            if(sum == temp){
                printf("%d = %d + %d + %d + %d + %d\n",temp ,temp/5-2, temp/5-1 ,temp/5 , temp/5+1,temp/5+2 );
                stamp = 1;
                continue;
            }


            sum = 7* (temp/7);
            if(sum == temp){
                printf("%d = %d + %d + %d + %d + %d + %d + %d\n",temp, (temp/7-3),(temp/7-2),(temp/7-1),(temp/7),(temp/7+1),(temp/7+2),(temp/7+3) );
                stamp = 1;
                continue;
            }
            temp2 = temp%8;
            sum =  (temp/8 + temp2) + (temp/8 + temp2-1) +(temp/8 + temp2-2) +(temp/8 + temp2-3) +(temp/8 + temp2-4) +(temp/8 + temp2-5) +(temp/8 + temp2-6)+(temp/8 + temp2-7);
            if(sum == temp){
                printf("%d = %d + %d + %d + %d + %d + %d + %d + %d\n",temp, (temp/8 + temp2-7),(temp/8 + temp2-6),(temp/8 + temp2-5),(temp/8 + temp2-4),(temp/8 + temp2-3),(temp/8 + temp2-2),(temp/8 + temp2-1),(temp/8 + temp2) );
                stamp = 1;
                continue;
            }

            temp2 = temp%10;
            sum =  (temp/10 + temp2) + (temp/10 + temp2-1) +(temp/10 + temp2-2) +(temp/10 + temp2-3) +(temp/10 + temp2-4) +(temp/10 + temp2-5) +(temp/10 + temp2-6)+(temp/10 + temp2-7)+(temp/10 + temp2-8);+(temp/10 + temp2-9);
            if(sum == temp){
                printf("%d = %d + %d + %d + %d + %d + %d + %d + %d + %d + %d\n",temp, (temp/10 + temp2-9),(temp/10 + temp2-8),(temp/10 + temp2-7),(temp/10 + temp2-6),(temp/10 + temp2-5),(temp/10 + temp2-4),(temp/10 + temp2-3),(temp/10 + temp2-2),(temp/10 + temp2-1),(temp/10 + temp2) );
                stamp = 1;
                continue;
            }

            if(stamp == 0)  printf("IMPOSSIBLE\n");


        }else if(temp%2 ==1 && temp !=1 ){
            printf("%d = %d + %d\n", temp ,temp/2, temp/2+1);
        }else{
            printf("IMPOSSIBLE\n");
        }


    }
    return 0;
}