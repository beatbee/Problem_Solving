/*
    Task	: polemid61
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 03 April 2023 [22:43]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int ch[] = {0,0,0};
int ans[2000][2000];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m,l=1;
    cin >> n >> m;
    for(int a = 0; a<n-1;a++){
        int x,y,z;
        cin >> x >> y >> z;
        ans[a][0] = x;
        ans[a][1] = y;
        ans[a][2] = z;
    }
    while(m--){
        int x,y,z;
        cin >> x >> y >> z;
        if(ans[l-1][0] <= x){
            ch[0] = 1;
        }
        if(ans[l-1][1] <= y){
            ch[1] = 1;
        }
        if(ans[l-1][2] <= z){
            ch[2] = 1;
        }
        if(ch[0] == 1 && ch[1] == 1 && ch[2] == 1){
            ch[0] = 0;
            ch[1] = 0;
            ch[2] = 0;
            l+=1;
        }
        if(l == n){
            break;
        }
        
    }
    cout << l << "\n";
    return 0;
}