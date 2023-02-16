#include<iostream>
using namespace std;
int main(){
    int n,i,a,ans = 0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        if(a>=0){
            ans += a;
        }
    }
    cout<<ans;
    return 0;
}