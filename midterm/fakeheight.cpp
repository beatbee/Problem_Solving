/*
    Task	: fakeheight
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 30 January 2023 [13:11]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
using namespace std;
//vector<int> s;
long long s[100100];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    long long n,mx1=0,mn=1e9,mx = -1e9,mx2 = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        long long a;
        cin >> a;
        s[i] = a;
    }
    
    return 0;
}