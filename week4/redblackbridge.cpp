#include<iostream>
#include<vector>
#include<list>
using namespace std;
struct node{
    int first,second;
};
vector<int> mark;
vector< vector<node> >  adj;
list<int> sp;
pair<int,int> pp[1010];
int s,t,n;
int redbb(int a){
    vector<int> mark(n);
    list<int> sp;
    sp.push_back(s);
    mark[s] = 1;
    int ans = 0;
    while(!sp.empty()){
        auto u = sp.front();
        sp.pop_front();
        if (u == t) {
            ans = mark[u] - 1;
            return ans;            
        }
        for(auto x:adj[u.first]){
            int v = adj[u][i].first;
            int c = adj[u][i].second;
            if(mark[v] == 0 && (c==0 || c==a)){
                mark[v] = mark[u] + 1;
                sp.push_back(v);
            }  
        }
    }
    return 1e9;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    adj.resize(n);
    for(int i = 0;i<m;i++){
        int u,v,c;
        cin >> u >> v >> c;
        u--;v--;
        adj[u].push_back({v,c});
        adj[v].push_back({u,c});
         
    }
    s--;t--;
    int ans1 = redbb(0);
    int ans2 = redbb(1);
    int ans3 = redbb(2);
    int ans4 = min(ans1,min(ans2,ans3));
    if(ans4 ==  1e9) cout << -1 << "\n";
    else cout << min(ans1,min(ans2,ans3)) << "\n";
    return 0;
}