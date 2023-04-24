/*
    Task	: mst1
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 20 February 2023 [13:12]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<algorithm>
int root[200100];
using namespace std;
int parent(int u){
    while(root[u]!=u){
        u = root[u];
        root[u] = root[root[u]];
    }
    return u;
}
void unionset(int u,int v){
    int x = parent(u);
    int y = parent(v);
    root[x] = root[y];
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m;
    cin >> n >> m;
    pair <int,pair<int,int> > g[m];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        g[i] = make_pair(w,make_pair(u,v));
    }
    sort(g,g+m);
    for(int i=0;i<n;i++){
        root[i] = i;
    }
    int ans = 0;
    for(int i=0;i<m;i++){
        int u = g[i].second.first;
        int v = g[i].second.second;
        int w = g[i].first;
        if(parent(u)!=parent(v)){
            unionset(u,v);
            ans+=w;
        }
    }
    cout << ans << "\n";
    return 0;
}