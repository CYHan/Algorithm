#include <iostream>
#include <vector>
#include <string>
using namespace std;
int num;
vector<long long> chart1;
vector<long long> chart2;
int temp;
int main() {
    chart1.assign(22,0); chart2.assign(22,0);
    scanf("%d",&num); scanf("%d", &temp);chart1[temp] += 1;
    for(int i=0 ; i< num-2; i++){
        scanf("%d", &temp);
       // cout << i << "th" << endl;
        for(int k=0; k<21; k++){
            if (chart1[k] >0 &&k+temp >=0 && k + temp <= 20) chart2[k + temp]+=chart1[k];
            if (chart1[k] >0 &&k - temp >=0 && k-temp <=20) chart2[k - temp]+=chart1[k];
        }

        //  for(int n=0; n<21; n++){
        //    cout << n << ": "<<chart2[n] << endl;
        //}
        chart1.assign(chart2.begin(),chart2.end());
        //chart1 = chart2;
        chart2.assign(22,0);
    }

    scanf("%d",&temp);
    printf("%lld",chart1[temp]);

}