/*
    Task	: carrental
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 25 January 2023 [16:15]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int ll[1010][1010],car[1010],mx = -1,ans[1010],sol = 0,cnt = 1;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int k,n;
    cin >> k >> n;
    int i;
    for(i=0;i<k;i++){
        int c,p,w;
        cin >> c >> p >> w;
        ll[i][0] = c;
        ll[i][1] = p;
        ll[i][2] = w;
    }
    for(i=0;i<n;i++){
        cin >> car[i];
        mx = max(mx,car[i]);
    }
    int c,p,w,j;
    for(i=0;i<k;i++){
        c = ll[i][0];
        p = ll[i][1];
        w = ll[i][2];
        if(mx > w){
            continue;
        }
        for(j =0 ;j<n;j++){
            sol += car[j];
            if(sol > w){
               sol = car[j];
               cnt++; 
            }
        }
        ans[i] = c+cnt*p;
        sol = 0;
        cnt = 1;   
    }
    int mn = 1e9;
    for(i=0;i<k;i++){
        if(ans[i]<mn && ans[i] != 0){
            mn = ans[i];
        }
    }
    cout << mn;
    return 0;
}