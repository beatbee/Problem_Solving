/*
    Task	: coinchange
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 03 April 2023 [20:49]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int ans[10000],n;
void coin(int n){
    int c[5] = {50,25,10,5,1};
    for(int i= 0 ;i< n ;i++){
        for(int j=c[i];j< 8192 ;j++){
            ans[j] += ans[j-c[i]];
        }
    }
}
int main(){
    ans[0] = 1;
    n = 5;
    coin(n);
    int x;
    while( cin >> x){
        cout << ans[x] << "\n";
    }
    return 0;
}