/*
    Task	: hos2
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 02 March 2023 [01:25]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int mark[5001][5001],cnt = 0,ans[5001],dis[5001];
vector<int> s[5001];
pair<int,int> p;
queue <pair <int , int> > q;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m,h,mx = -1;
    cin >> n >> m >> h;
    int i;
    for(i=0;i<m;i++){ 
        int u,v;
        cin >> u >> v;
        u--; v--;
        s[u].push_back(v);
        s[v].push_back(u);
    }
    for(i=0;i<n;i++){
        dis[i] = 0;
        p = make_pair(i,i);
        q.push(p);
    }
    while(!q.empty()){
        int u = q.front().first;
        int v = q.front().second;
        q.pop();
        if(mark[u][v]) continue;
        mark[u][v] = 1;
        ans[u]++;
        if(dis[u] == h) continue;
        for(auto x:s[v]){
            if(mark[u][x]) continue;
            p = make_pair(u,x);
            q.push(p);
            dis[u] = dis[u] +1;
            dis[x] = dis[x] +1;
        }
    }
    for(i=0;i<n;i++){
        mx = max(mx,ans[i]);
    }
    cout << mx << "\n";
    return 0;
}