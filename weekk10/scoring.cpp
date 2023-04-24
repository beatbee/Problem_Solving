/*
    Task	: scoring
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 03 April 2023 [21:53]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> g[200];
int sumpoint[200],visit[200];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m,ans = 0;
    cin >> n >> m;
    for(int i=0;i< m ;i++){
        int a,s;
        cin >> a >> s;
        g[a].push_back(s);
        if(visit[a] >=5){
            sumpoint[a] = 0;
        }
        else if(s > sumpoint[a]){
            sumpoint[a] = s;
        }
        visit[a] += 1;
        //sumpoint[a] = *max_element(g[a].begin(),g[a].end());
    }
    for(int i=1;i<= n ;i++){
        //cout << sumpoint[i] << " ";
        ans += sumpoint[i];
    }
    cout << ans << "\n";
    return 0;
}