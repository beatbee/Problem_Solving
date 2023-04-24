/*
    Task	: pfreind
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 04 April 2023 [00:10]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int P(int num){
    if (num == 1 || num == 0){
        return 1;
    }
    for(int i = 2; i*i<=num;i++){
        if(num%i == 0){
            return 1;
            break;
        }
    }
    return 0;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int a,b;
    int cc = 0;
    cin >> a >> b;
    for(int k=a;k<=b;k++){
        if(k+2 <=b && P(k) == 0 && P(k+2) == 0){
            cc+=1;
        }
    }
    cout << cc << "\n";
    return 0;
}