#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
struct A{
    int w,distance,c;
};
int n,m;
vector<A> adj[100010];
int deg[100010];
int visited[100010][10];
int ans = 0;
int k,h;
queue<A> q;
void bfs(){
    while(!q.empty()){
        int u = q.front().w;
        int distance = q.front().distance;
        int c = q.front().c;
        q.pop();
        if(deg[u]==1){
            c = 1;
        }
        if(visited[u][c] ==1){
            continue;
        }
        if(visited[u][0] == 0 && visited[u][1] == 0){
            ans++;
        }
        visited[u][c] = 1;
        if(distance == h){
            continue;
        }
        for(int j = 0;j<adj[u].size();j++){
            if(visited[adj[u][j].w][c] == 1){
                continue;
            }
            if(c == 0 && adj[u][j].c == 1){
               continue;
            }
            q.push({adj[u][j].w,distance+1,c});
        }

    }
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    cin >> n >> m >> k >>h;;
    for(int j = 0;j<k;j++){
        int x;
        cin >> x;
        deg[x] = 1;
    }
    q.push({1,0,0});
    for(int i = 0;i<m;i++){
        int u,v,c;
        cin >> u >> v >> c;
         adj[u].push_back({v,0,c});
         adj[v].push_back({u,0,c});
    }
    bfs();
    cout << ans << "\n";


    return 0;
}