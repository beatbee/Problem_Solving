/*
    Task	: country
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 30 January 2023 [13:53]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int map[100][100],visit[100][100];
int r,c,a,b,x,y,cnt = 0;
void travel(int i,int j,int min_dist,int mn){
    visit[i][j] = 1;
    if(i == x && j == y){
        min_dist  = min(mn,min_dist);
        cnt = min_dist;
        return;
    }
    if(visit[i-1][j] == 0 && i-1>=0 && map[i-1][j] != map[i][j]){
        travel(i-1,j,min_dist,mn+1);
    }
    if(visit[i+1][j] == 0 && i+1<r && map[i+1][j] != map[i][j]){
        travel(i+1,j,min_dist,mn+1);
    }
    if(visit[i][j-1] == 0 && j-1>=0 && map[i][j-1]!= map[i][j]){
        travel(i,j-1,min_dist,mn+1);
    }
    if(visit[i][j+1] == 0 && j+1<c && map[i][j+1] != map[i][j]){
        travel(i,j+1,min_dist,mn+1);
    }
    if(visit[i-1][j] == 0 && i-1>=0 && map[i-1][j] == map[i][j]){
        travel(i-1,j,min_dist,mn);    
    }
    if(visit[i+1][j] == 0 && i+1<r && map[i+1][j] != map[i][j]){
        travel(i+1,j,min_dist,mn);
    }
    if(visit[i][j-1] == 0 && j-1>=0 && map[i][j-1] != map[i][j]){
        travel(i,j-1,min_dist,mn);
    }
    if(visit[i][j+1] == 0 && j+1<c && map[i][j+1] != map[i][j]){
        travel(i,j+1,min_dist,mn);
    }
    visit[i][j] = 0;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    cin >> r >> c >> a >> b >> x >> y;
    a--;b--;x--;y--;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> map[i][j];
            visit[i][j] = 0;    
        }
    }
    int dist = 1000000;
    travel(a,b,dist,0);
    cout << cnt;
    return 0;
}