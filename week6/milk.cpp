/*
    Task	: milk
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 16 February 2023 [14:36]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int root[200100];
int parent(int u){
    while(root[u]!=u){
        u = root[u];
        root[u] = root[root[u]];
    }
    return u;
}
void unionset(int u,int v){
    int x = parent(u);
    int y = parent(v);
    root[x] = root[y];
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        root[i] = i;
    }
    while(m--){
        int a,b;
        char p;
        cin >> p >> a >> b ;
        if(p == 'q'){
            if(parent(a)==parent(b)){
                cout << "yes\n";
            }else{
                cout << "no\n";
            } 
        }
        if(p == 'c'){
            unionset(a,b);
        }
    }
    return 0;
}