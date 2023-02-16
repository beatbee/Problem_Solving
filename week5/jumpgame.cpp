/*
    Task	: jumpgame
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 25 January 2023 [21:12]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int n,k,ans = 0;
int maze[100][100],visit[100][100];
void jumpgame(int x,int y){
    visit[x][y] = 1;
    if(x == n-1 && y == n-1){
        ans = 1;
        return;
    }
    if(x+1 < n && visit[x+1][y] == 0 && (maze[x+1][y] - maze[x][y]) <= k ){
        jumpgame(x+1,y);
    }
    if(y+1 < n && visit[x][y+1] == 0 && (maze[x][y+1] - maze[x][y]) <= k ){
        jumpgame(x,y+1);
    }
    if(x-1 >= 0 && visit[x-1][y] == 0 && (maze[x-1][y] - maze[x][y]) <= k ){
        jumpgame(x-1,y);
    }
    if(y-1 >= 0 &&  visit[x][y-1] == 0 && (maze[x][y-1] - maze[x][y]) <= k ){
        jumpgame(x,y-1);
    }
    return;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    cin >> n >> k;
    int i,j;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> maze[i][j];
            visit[i][j] = 0;
            //cout << maze[i][j] << " ";
        }
    }
    jumpgame(0,0);
    if(ans == 1){
        cout << "yes\n" ;
    }
    else{
        cout << "no\n";
    }
    return 0;
}