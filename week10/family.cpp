/*
    Task	: family
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 04 April 2023 [00:21]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int fam[1100];
int family(int x ,int y){
    while( y !=1){
        if(x == y){
            return 0;
        }
        y = fam[y];
    }
    return 1;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m;
    cin >> n >> m;
    for(int a =2;a<=n;a++){
        cin >> fam[a];
    }
    for(int i = 0; i< m ;i++){
        int x,y;
        cin >> x >> y;
        if(x == 1 || y ==1){
            cout << "1\n";
        }
        else if(!family(x,y)){
            cout << x << "\n";
        }
        else if(!family(y,x)){
            cout << y << "\n";
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}