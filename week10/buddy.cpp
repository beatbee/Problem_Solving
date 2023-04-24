#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> adj[100010];
int deg[100010],layer[100010];
bool visited[100010];
void bfs(int s){
    vector<int> q;
    vector<int> tmp;
    q.push_back(s);
    int cnt = 0;
    layer[s] = 0;
    while(!q.empty()){
        for(int i = 0;i<q.size();i++){
            int u = q[i];
            visited[u] = true;
            for(int j = 0;j<deg[u];j++){
                int v = adj[u][j];
                if(layer[v] == -1){
                    tmp.push_back(v);
                    layer[v] = cnt+1;
                }
            }
        }
        q = tmp;
        tmp.clear();
        cnt++;
    }
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    cin >> n;
    for(int j = 0;j<n;j++){
        deg[j] = 0;
    }
    for(int u = 0;u<n;u++){
        int v;
        cin >> v;
        v--;
        adj[u].push_back(v);
        deg[u]++;
        adj[v].push_back(u);
        deg[v]++;
    }
    for(int j = 0;j<n;j++){
        layer[j] = -1;
        visited[j] = false;
    }
    int ans = 0;
    int j = 0;
    while(n--){
        if(!visited[j]){
            bfs(j);
            ans++;
        }
        j++;
    }
    cout << ans << "\n";


    return 0;
}