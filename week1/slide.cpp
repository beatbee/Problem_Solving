#include<iostream>
using namespace std;
int a[31];
int main(){
    int n,ans = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){ 
            if(a[j]<a[i]){
                ans++;
            }
        } 
    }
    cout << ans;
    return 0;
}