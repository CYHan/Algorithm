#include <iostream>
#include<string>
#include <cstring>
#include<vector>
using namespace std;
string a,b;
int carry=0;
vector<int> arr;
int counter =0;
int main() {
    bool st1,st2 = 1;
    cin >> a >> b;
    int temp1,temp2;
    int asize,bsize;
    asize = a.size();
    bsize = b.size();

    //while(){
    for(int i=0; i< max(asize,bsize)+1; i++){
            if(asize-counter >0) {
               // cout << "counter"  <<asize-counter << endl;
                temp1 = int(a[asize-counter-1]-'0');

            }else{
                temp1 =0;
                st1 = 0;
            }
            if(bsize-counter >0) {
                temp2 = int(b[bsize-counter-1]-'0');
            }else{
                temp2 =0;
                st2 = 0;
            }

            if((temp1 +temp2 +carry)/10 == 1 ){

                arr.push_back((temp1+temp2 +carry) - 10);
                carry =1;
               // cout << arr[counter] << endl;
            }else if((temp1 + temp2 +carry)/10 ==0){

                arr.push_back((temp1+temp2 +carry));
                carry =0;
              //  cout << arr[counter] << endl;
            }
        counter+=1;
    }

    if(arr[arr.size()-1] != 0) cout<< arr[arr.size()-1];
    for(int i=arr.size()-2; i >= 0; i--){
        cout << arr[i];
    }




    return 0;
}