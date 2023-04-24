/*
    Task	: supersale
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 03 April 2023 [23:16]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<algorithm>
using namespace std;
int p[1010],w[1010],mem[2000][2000],mw[1010],sum;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n;
    cin >> n;
    for(int i=0 ;i <n;i++){
        int num;
        cin >> num;
        int sum = 0;
        for(int i=1;i<=num;i++){
            cin >> p[i] >> w[i];
        }
        int g;
        cin >> g;
        for(int j = 0; j<g;j++){
            cin >> mw[j];
        }
        //memset(mem, 0, sizeof(mem));
        for(int k = 0 ;k < g ; k++){
            for(int i = 1; i<=num;i++){
                for(int j = 0 ; j <= mw[k];j++){
                    if(j >= w[i]){
                        mem[i][j] = max(mem[i-1][j],mem[i-1][j-w[i]]+p[i]);
                    }
                    else{
                        mem[i][j] = mem[i-1][j];
                    }
                }
            }
            sum += mem[num][mw[k]];
            for(int i = 0 ; i <= mw[k];i++){
                mem[0][i] = 0;    
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
