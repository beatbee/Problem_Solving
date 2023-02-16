#include<iostream>
#include<vector>
#include<list>
using namespace std;
int node[1010];
vector< pair<int,int> > adj[1010];
list<int> sp;
pair<int,int> pp[1010];
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    for(int i = 0;i<m;i++){
        int u,v,c;
        cin >> u >> v;
        u--;v--;
        adj[u].push_back({v,c});
        adj[v].push_back({u,c});
         
    }
    sp.push_back(s-1);
    node[s-1] = 0;
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