#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int m;
char st1[500],ans[500];
int dp[500][500];
int rna(int m){
    for(int i=0;i<=m;i++){
        for(int j=0;j<=m;j++){
            dp[i][j] = 0;
        }
    }
    for(int i=m;i>0;i--){
        for(int j=i+5;j<=m;j++){
            if((st1[i-1] == 'G' && st1[j-1] == 'C') || (st1[i-1] == 'C' && st1[j-1] == 'G') || (st1[i-1] == 'A' && st1[j-1] == 'U') || (st1[i-1] == 'U' && st1[j-1] == 'A')){
                dp[i][j] = max(dp[i][j],dp[i+1][j-1]+1);
            }
            for(int k=i;k<j;k++){
                dp[i][j] = max(dp[i][j],dp[i][k]+dp[k+1][j]);
            }
        }
    }
    return dp[1][m];
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    cin >> st1;
    int m = strlen(st1);
    cout << rna(m) << "\n";
    return 0;
}