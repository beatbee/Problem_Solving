#include <iostream>
#include <vector>
#include <list>
using namespace std;
int mark[100100],cnt = 0,ans[100100];
vector<int> g[100100];
void twoteam(int now){
    ans[now] = cnt;
    mark[now] = 3-mark[now];
    for(int i=0;i<g[now].size();i++){
        if(ans[g[now][i]]!=cnt){
            twoteam(g[now][i]);
        }
    }
    
}
int main(){
    int n,m,i,ch = 0;
    cin >> n >> m;
    for(i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        if(mark[v]==0 && mark[u]==0){
            mark[v] = 2;
            mark[u] = 1;
        }
        else if(mark[v]==0){
            mark[v] = 3-mark[u];
        }
        else if(mark[u]==0 ){
            mark[u] = 3-mark[v];
        }
        
        else {
            if(mark[u]==mark[v]){
                cnt++;
                twoteam(v);
                if(mark[u] == mark[v]){
                    cout << i << "\n";
                    ch = 1;
                    break;
                }
            }
        }
        g[u].push_back(v);
        g[v].push_back(u);
    } 
    if(ch==0) cout << i << "\n";
    return 0;
}