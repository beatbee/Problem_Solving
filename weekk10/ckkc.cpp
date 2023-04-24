/*
    Task	: ckkc
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 04 April 2023 [00:03]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    char head[] = {'K','C'};
    int n;
    cin >> n;
    int noyear,no = 0;
    while(cin >> noyear && noyear != 0){
        no+=1;
    }
    int ans = 0;
    ans = (n-no)%2;
    cout << head[ans] << "\n";
    return 0;
}