/*
    Task	: maxpieces
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 30 March 2023 [14:18]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a[100010];
int dp[100010];
//vector< vector<int> > dp;
int kn(int n,int x,int y){
    if(n == 0) return 0;
    if(a[n-1] <= x && a[n-1] >= y){
        return max(kn(n-1,x-a[n-1],y)+1,kn(n-1,x,y));
    }
    else{
        return kn(n-1,x,y);
    }
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
        cout << kn(n,x,y) << "\n";
        
    }
    return 0;
}