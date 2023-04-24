#include<iostream>
#include<vector>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int v[100];
int dp[100][100];
int cut(int a,int b){
    if(dp[a][b]!=-1) return dp[a][b];
    if(a+1==b){
        dp[a][b] = 0;
        return dp[a][b];
    }
    int mn = 1e9;
    for(int i=a+1;i<b;i++){
        int x = cut(a,i)+cut(i,b)+v[b]-v[a];
        mn = min(mn,x);
    }
    dp[a][b] = mn;
    return mn;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    while(1){
        int n,c;
        cin >> n;
        if(n==0) break;
        cin >> c;
        for(int i=1;i<=c;i++){
            int x;
            cin >> x;
            v[i] = x;
        }
        v[0] = 0;
        v[c+1] = n;
        memset(dp,-1,sizeof(dp));
        cout << "The minimum cutting is " << cut(0,c+1) << ".\n";
    }
    return 0;
}