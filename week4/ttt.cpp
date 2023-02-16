/*
    Task	: ttt
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 26 January 2023 [21:50]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include <utility>
#include<list>
using namespace std;
vector<int> g[5050];
list<int> l;
pair<int, int> pp[5050];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int mark[100100];
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
        pp[i] = make_pair(a,b);
    }
    for(int i=0;i<n;i++){
        mark[i] = 0;
    }
    int ch = 0;
    for(int j = 0;j<m;j++){
        for(int i=0;i<n;i++){
            if(mark[i]) continue;
            l.push_back(i);
            mark[i] = 1;
            ch = 0;
            while(!l.empty()){
                int now = l.front();
                l.pop_front();
                for(auto x:g[now]){
                    if(x == pp[j].first && now == pp[j].second)
                        continue;
                    if(x == pp[j].second && now == pp[j].first)
                        continue;
                    if(mark[x]==0){
                        mark[x] = 3-mark[now];
                        l.push_back(x);
                    }
                    else{ 
                        if(mark[x]==mark[now]){
                            while(!l.empty()){
                                l.pop_front();
                            }
                            for(int i=0;i<n;i++){
                                mark[i] = 0;
                            }
                            ch = 1;
                            break;
                        }
                    }
                }
            }
            if(ch == 1){
                break;
            }
        }
        if(ch == 0){
            cout << pp[j].first+1 << " " << pp[j].second+1 << "\n";
            break;
        }
    }
    return 0;
}