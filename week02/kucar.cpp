/*
    Task	: kucar
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 21 December 2022 [15:39]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int a[200002];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,i,j = -1,cnt = 0,b;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> b >> a[i];
    }
    for(i=n-1;i>=0;i--){
        if(a[i]<=j){
            cnt++;
        }
        if(a[i]>j){
            j = a[i];
        }   
    }
    cout << cnt;
    return 0;
}