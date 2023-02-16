/*
    Task	: qualitymap
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 07 January 2023 [16:40]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int mark[40][40],cnt,forest = 0,material = 0,good = 0,medium = 0,n,m;
char map[40][40];
void travel(int i,int j){
    mark[i][j] = 1;
    if(map[i][j] == '$')  material = 1;
    if(map[i][j] == '*')  forest = 1;
    cnt++;
    if(map[i-1][j] != '#' && mark[i-1][j] == 0 && i-1>=0){
        travel(i-1,j);
    }
    if(map[i+1][j] != '#' && mark[i+1][j] == 0 && i+1<n){
        travel(i+1,j);
    }
    if(map[i][j-1] != '#' && mark[i][j-1] == 0 && j-1>=0){
        travel(i,j-1);
    }
    if(map[i][j+1] != '#' && mark[i][j+1] == 0  && j+1<m){
        travel(i,j+1);
    }
}
void qualitymap(int i,int j){
    forest = 0,material = 0,cnt = 0;
    travel(i,j);
    if(forest == 1 && material == 1){
        good += cnt;    
    }
    else if(forest == 1 || material == 1){
        medium += cnt;
    }
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(map[i][j]!='#' && mark[i][j] == 0){
                qualitymap(i,j);
            }
        }
    }
    cout << good << " " << medium;

    return 0;
}
/*
7 8
.*..#...
....#...
.$.#..*#
..#..##.
.#.##...
#....###
..$.....
*/