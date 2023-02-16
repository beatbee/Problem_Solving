/*
    Task	: orderingtask
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 09 January 2023 [15:21]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<int> g[200100];
int degree[200100];
list<int> l;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m;
    while(1){
        vector<int> g[200100];
        int degree[200100];
        list<int> l;
        cin >> n >> m;
        if(n==0 && m==0){
            break;
        }
        for(int i=0;i<m;i++){
            int u,v;
            cin >> u >> v;
            u--;v--;
            g[u].push_back(v);
            degree[v]++;
        }
        for(int i=0;i<n;i++){
            if(degree[i]==0){
                l.push_back(i);
            }
        }
        while(!l.empty()){
            int now = l.front();
            l.pop_front();
            cout << now+1 << " ";
            for(int i=0;i<g[now].size();i++){
                degree[g[now][i]]--;
                if(degree[g[now][i]]==0){
                    l.push_back(g[now][i]);
                }
            }
        }
        cout << "\n";
    }
    return 0;
}