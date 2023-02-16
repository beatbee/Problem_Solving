/*
    Task	: shortestpath
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 23 January 2023 [17:45]
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
    int n,m;
    cin >> n >> m;
    int i;
    vector<int> s[n+1],we[n+1];
    queue<int> q;
    for(i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        u--; v--;
        s[u].push_back(v);
        s[v].push_back(u);
        we[u].push_back(w);
        we[v].push_back(w);
    }
    int dis[n+1];
    for(i=0;i<=n;i++){
        dis[i] = 1e9;
    }
    dis[0] = 0;
    q.push(0);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(i=0;i<s[now].size();i++){
            if(dis[s[now][i]] > dis[now]+we[now][i]){
                dis[s[now][i]] = dis[now] +we[now][i];
                q.push(s[now][i]);
            }
        }
    }
    cout << dis[n-1];
    return 0;
}