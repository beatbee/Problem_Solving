/*
    Task	: bipartite
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 09 January 2023 [13:36]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int k,m,n,ch;
int bfs(int u ){
    vector<int> g[100100];
    int mark[100100];
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        mark[i] = 0;
    }
    list<int> l;
    l.push_back(u);
    mark[u] = 1;
    while(!l.empty()){
        int now = l.front();
        l.pop_front();
        for(int i=0;i<g[now].size();i++){
            if(mark[g[now][i]]==0){
                mark[g[now][i]] = 1-mark[now];
                l.push_back(g[now][i]);
            }
            else{ 
                if(mark[g[now][i]]==mark[now]){
                    return -1;
                }
            }
        }
    }
    return 0;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    cin >> k;
    while(k>0){
        ch = bfs(0);
        if(ch==-1){
            cout << "no\n";
        }
        else{
            cout << "yes\n";
        }
        k--;
    }
    return 0;
}