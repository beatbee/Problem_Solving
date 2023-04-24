/*
    Task	: sumprime
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 03 April 2023 [21:31]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int sum[1500][20],p[10000],cnt = 0,visit[10000001];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int num = 10000;
    for(int i=2;i< num ;i++){
        if(visit[i] == 0){
            p[cnt] = i;
            cnt++;
            for(int j=2;i*j< num;j++){
                int b = i*j;
                visit[b] = 1;
            }
        }
    }
    sum[0][0] = 1;
    for(int i=0;i< cnt ;i++){
        for(int j=1120;j>= p[i];j--){
            for(int a = 14;a>=1 ; a--){
                sum[j][a] += sum[j-p[i]][a-1];
            }
        }
    }
    while(1){
        int n,k;
        cin >> n >> k;
        if(n==0 && k==0) break;
        cout << sum[n][k] << "\n";
    }
    return 0;
}