/*
    Task	: box
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 26 December 2022 [14:48]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
char a[100][100];
int visited[100][100],n,m,ans = 0;
void map(int i,int j){
    visited[i][j] = 1;
    if(i==n-2){
        ans ++;
        return ;
    }
    if(a[i][j+1] == '.' && visited[i][j+1] == 0 && j+1 < m && i+1 < n && j+2 < m ){
        if(a[i][j+2] == '.' && a[i+1][j+1] == '.' && a[i+1][j+2] == '.' ){
            map(i,j+1);    
        }
    }
    if(a[i][j-1] == '.' && visited[i][j-1] == 0 && j-1 >= 0 && i+1 < n && i-1 >= 0){
        if(a[i][j] == '.' && a[i+1][j-1] == '.' && a[i+1][j] == '.' ){
            map(i,j-1);    
        }
    }
    if(a[i+1][j] == '.' && visited[i+1][j] == 0 && j+1 < m && i+1 < n && i+2 < n){
        if(a[i+1][j+1] == '.' && a[i+1][j] == '.' && a[i+2][j+1] == '.' ){
            map(i+1,j);    
        }
    }
    if(a[i-1][j] == '.' && visited[i-1][j] == 0 && i-1 >= 0 && j+1 < m && i+2 < n){
        if(a[i-1][j+1] == '.' && a[i][j] == '.' && a[i][j+1] == '.' ){
            map(i-1,j);    
        }
    }
    visited[i][j] = 0;   

}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int i,j;
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(i = 0;i<m;i++){
        if(a[0][i] == '.' && a[1][i] == '.' && a[0][i+1] == '.' && a[1][i+1] == '.'){
            map(0,i);
        }
    }
    if(ans>0) cout << "yes";
    else cout << "no";
    
    return 0;
}

/*
7 14
##..##...#.#..
##..##...#.#..
##.####..#.#..
#...#....#####
..........###.
####...######.
...#..##..###.
*/