/*
    Task	: teamproject
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 30 January 2023 [13:40]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<int> g[100100];
int degree[100100],mark[100100];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m,k;
    cin >> n >> m >> k;
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }
    for(int i=0;i<n;i++){
        mark[i] = 0;
    }
    list<int> l;
    for(int i=0;i<n;i++){
        if(degree[i]<k){
            l.push_back(i);
            mark[i] = 1;
            break;
        }
    }
    int ans = 0;
    while(!l.empty()){
        int now = l.front();
        l.pop_front();
        for(int i=0;i<g[now].size();i++){
            if(degree[g[now][i]] >= k) continue;
            if(mark[g[now][i]]==0){
                mark[g[now][i]] = 3-mark[now];
                l.push_back(g[now][i]);
            }
            else{ 
                if(mark[g[now][i]]==mark[now]){
                    ans = -1;
                }
            }
        }
    }
    if(ans == -1){
        cout << "no\n";
    }
    else{
        cout << "yes\n";
    }
    return 0;
}
