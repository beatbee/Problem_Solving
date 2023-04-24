#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int m,n;
char st1[500],st2[500],ans[500];
int dp[500][500];
void lcs(int m, int n){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            if(st1[i-1] == st2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
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
    int k =0;
    while(dp[m][n] != 0){
        if(st1[m-1] == st2[n-1]){
            ans[k] = st1[m-1];
            k++;
            m--;
            n--;
        }
        else if(dp[m-1][n] > dp[m][n-1]){
            m--;
        }
        else{
            n--;
        }
    }
    cout << dp[m1][n1]<< "\n";
    for(int i=k-1;i>=0;i--){
        cout << ans[i];
    }
    return 0;
}