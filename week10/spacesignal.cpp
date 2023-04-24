/*
    Task	: spacesignal
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 04 April 2023 [00:34]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    string signal,word;
    cin >> word;
    cin >> signal;
    int l = word.length();
    int w = signal.length();
    int cnt = 0,ans = 0;
    for(int j = 0; j<w;j++){
        if(signal[j] == word[cnt]){
            ans += (cnt+1)/l;
            cnt +=1;
            cnt%=l;
        }
    }
    cout << ans <<"\n";
    return 0;
}