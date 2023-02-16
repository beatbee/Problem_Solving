/*
    Task	: roundtable
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 26 January 2023 [23:03]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int order[200001],sol[200001];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> order[i];
    }
    int ans = 0,mx = -1;
    for(int i = 0;i<n;i++){
        ans = order[i]-i;
        if(ans<0) ans+=n;
        sol[ans]++;
        if(sol[ans] > mx) mx = sol[ans];
    }
    cout << mx << "\n";
    return 0;
}