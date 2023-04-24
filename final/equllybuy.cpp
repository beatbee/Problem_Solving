/*
    Task	: equllybuy
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 30 March 2023 [14:34]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int a[250];
int mem[250][250],m[500];
int dp[250][250];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        m[i] = max(a[i]+m[i-1],m[i-1]);
    }
    cout << m[n-1] << "\n";
    return 0;
}