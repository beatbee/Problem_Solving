/*
    Task	: encrypt
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 07 April 2023 [00:10]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int mem[200210],ch[200210];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    cin.exceptions(cin.failbit);
    int n,s;
    cin >> n >> s;
    cin >> ch[0];
    mem[n-1] = ch[0];
    int i = 1;
    int n1 = n;
    while(i<n){
        int x;
        cin >> x;
        ch[i] = min(ch[i-1],x);
        mem[n-i-1] = ch[i];
        i++;

    }
    int ans = 0;
    for(int i=0;i<s;i++){
        int a,b;
        cin >> a >> b;
        if(a==1){
            ans = ch[b-1];
            cout << ans << "\n";
        }
        if(a==2){
            //ans =
            cout <<  n - (lower_bound(mem,mem+n,mem)-mem) << "\n";
        }

    }
   
    return 0;
}