/*
    Task	: maxlate
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 25 January 2023 [15:12]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int s,f,cnt = 0,ans = 0;
vector<pair <int,int> > v;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> f;
        v.push_back(make_pair(s,f));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cnt += v[i].second;
        if(v[i].first <= cnt-10){
            if((cnt-10-v[i].first)*1000 > ans){ 
                ans = (cnt-10-v[i].first)*1000;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}