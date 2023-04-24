#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int m,n;
char st1[500],st2[500],ans[500];
int dp[500][500];
void lcs(int m, int n){
    for(int i=0;i<=m;i++){
        dp[i][0] = i;
    }
    for(int i=0;i<=n;i++){
        dp[0][i] = i;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(st1[i-1] == st2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = min(dp[i-1][j-1]+1,min(dp[i-1][j]+1,dp[i][j-1]+1));
            }
        }
    }
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    cin >> st1;
    cin >> st2;
    int m = strlen(st1);
    int n = strlen(st2);
    int m1 = m,n1=n;
    lcs(m1,n1);
    cout << dp[m1][n1]<< "\n";
    return 0;
}