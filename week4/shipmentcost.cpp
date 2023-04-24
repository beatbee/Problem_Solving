/*
    Task	: shipmentcost
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 08 March 2023 [17:38]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    vector <int> g[200000],mark,dis;
    queue <int> q;
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    g->resize(n);
    mark.resize(n);
    dis.resize(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=0;i<s;i++){
        int x;
        cin >> x;
        x--;
        q.push(x);
        mark[x] = 1;
    }
    int now = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        now = dis[u];
        for(auto x:g[u]){
            if(mark[x]) continue;
            mark[x] = 1;
            dis[x] = now + 1;
            q.push(x);
        }
    }
    for(int i=0;i<t;i++){
        int y;
        cin >> y;
        y--;
        cout << dis[y] << "\n";
    }
    return 0;
}