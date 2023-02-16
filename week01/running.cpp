#include<iostream>
using namespace std;
long long a[1000000];
int main(){
    int n,k,ans = 0;
    long long mn = 2e9;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]<mn){
            mn = a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(mn*k <= a[i]*(k-1)){
            ans++;
        }
    }
    cout << n-ans;
    return 0;
}