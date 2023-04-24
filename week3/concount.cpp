/*
    Task	: concount
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 26 December 2022 [13:22]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> adj[100010];
int deg[100010],lay[100010];
bool visited[100010];
void init(){
    cin >> n >> m;
    for(int j = 0;j<n;j++){
        deg[j] = 0;
    }
    for(int i = 0;i<m;i++){
        int u,v;
        cin >> u >> v;
        u--;v--;
        adj[u].push_back(v);
        deg[u]++;
        adj[v].push_back(u);
        deg[v]++;
    }
    for(int j = 0;j<n;j++){
        lay[j] = -1;
        visited[j] = false;
    }
}
void bfs(int s){
    vector<int> q;
    vector<int> n;
    q.push_back(s);
    lay[s] = 0;
    int l = 0;
    while(!q.empty()){
        for(int i = 0;i<q.size();i++){
            int u = q[i];
            visited[u] = true;
            for(int j = 0;j<deg[u];j++){
                int v = adj[u][j];
                if(lay[v] == -1){
                    n.push_back(v);
                    lay[v] = l+1;
                }
            }
        }
        q = n;
        n.clear();
        l++;
    }
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    init();
    int ans = 0;
    for(int j = 0;j<n;j++){
        if(!visited[j]){
            bfs(j);
            ans++;
        }
    }
    cout << ans << "\n";


    return 0;
}
