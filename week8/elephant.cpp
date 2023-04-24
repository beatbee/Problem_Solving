/*
    Task	: elephant
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 08 March 2023 [14:59]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int check(int n){
    if(n<0) return 0;
    else return n;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n;
    cin >> n;
    vector <int> a,b;
    int i;
    for(i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
        b.push_back(0);
    }
    for(i=2;i<n;i++){
        b[i] = max(b[check(i-1)],b[check(i-3)]+a[i]);
    }
    cout << b[n-1] << "\n";
    return 0;
}