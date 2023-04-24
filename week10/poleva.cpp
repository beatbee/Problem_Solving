/*
    Task	: poleva
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 06 April 2023 [23:14]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int ch[1100],sol[1100];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,question;
    cin>>n>>question;
    sol[0] = 3000001;
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
    int ans = 0;
    for(int i=1;i<n-1;i++){
        ans = ch[i-1] + ch[i] + ch[i+1];
        sol[ans]++;
        sol[ans-ch[i+1]]++;
    }
    sol[ch[n-1]+ch[n-2]]++;
    while(question--){
        int q;
        cin>>q;
        if(sol[q] == 0) cout<<"NO\n";
        else cout<<"YES\n";    
    }


    return 0;
}