#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a[100010];
//int dp[100010][100010];
vector<vector<int>> dp;
int max(int a, int b) { return (a > b) ? a : b; }
int kn(int n,int x,int y){
    for(int i=1;i<=n;i++){
            for(int j=1;j<=x;j++){
                if(a[i-1] <= j && a[i-1] >= y){
                      dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i-1]]+1);
                      //dp = 0;
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][x];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++){
        int x,y;
        cin >> x >> y;
        vector<vector<int>> dp(n+1,vector<int>(x,0));
        cout << kn(n,x,y) << "\n";
        
    }
    return 0;
}