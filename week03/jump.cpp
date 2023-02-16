/*
    Task	: jump
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 26 December 2022 [14:23]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int x[1010],y[1010],node[1010];
vector<int> adj[1010];
list<int> sp;
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,r;
    cin >> n >> r;
    for(int i = 1;i<=n;i++){
        cin >> x[i] >> y[i];
    }
    x[0] = 0; y[0] = 0;
    node[0] = 0;
    node[n+1] = -1e9;
    sp.push_back(0);
    x[n+1] = 100; y[n+1] = 100;
    for(int i = 0;i<n+2;i++){
        for(int j = 0;j<n+2;j++){
            if(i==j) continue;
            if((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])<=r*r){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    while(sp.size()>0){
        int u = sp.front();
        sp.pop_front();
        for(int i = 0;i<adj[u].size();i++){
            if(node[adj[u][i]] && node[adj[u][i]]!= -1e9){
                continue;
            }
            node[adj[u][i]] = node[u]+1;
            sp.push_back(adj[u][i]);
        }
    }
    if(node[n+1]==-1e9) cout << -1;
    else cout << node[n+1];

    return 0;
}