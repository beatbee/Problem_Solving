/*
    Task	: mask
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 06 January 2023 [12:31]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int a[310][5],win[5],score[5],fin[5];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,mx = -1e9,j,i,cnt = 1,win1 = 0,win2 =0,win3 = 0,win4 = 0,tmp = 0;
    cin >> n;
    for(int i = 0; i < 4; i++){
        mx = -1e9;
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] > mx){
                mx = a[i][j];
                win[i] = cnt;
                score[i] = a[i][j];
            }
            cnt++;
        }
    }
    int tmp2 = 0;
    if(score[0] >= score[1]){
        win3 = win[1];
        win1 = win[0];
        tmp = score[0];
        tmp2 = win[0];
    }
    else{
        win3 = win[0];
        win1 = win[1];
        tmp = score[1];
        tmp2 = win[1];
    }
    if(score[2] >= score[3]){
        win4 = win[3];
        if(tmp >= score[2]){
            win2 = win[2];
        } 
        else{
            win1 = win[2];
            win2 = tmp2;
        }
    }
    else{
        win4 = win[2];
        if(tmp >= score[3]){
            win2 = win[3];
        } 
        else{
            win1 = win[3];
            win2 = tmp2;
        }
    }
    cout << win1 << " " << win2 << " " << win3 << " " << win4;
    return 0;
}