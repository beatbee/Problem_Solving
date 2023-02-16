#include<iostream>
using namespace std;
int a[100005]; 
int main(){
    int n,i,cnt = -1,b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>b;
        a[b]++;
    }
    for(i=0;i<301;i++){
        if(a[i] >cnt){
            cnt = a[i];
        }
    }
    cout<<cnt;
    return 0;
}
