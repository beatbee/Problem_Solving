#include<iostream>
#include<string.h>
using namespace std;
char word[1000];
int main()
{
    int k;
    cin >> word >> k;
    int lenw = strlen(word);
    if(lenw == k){
        cout << "0\n"; 
        return 0;
    }
    int n = 0,e = 0,w = 0,s = 0;
    for(int i=0;i<lenw;i++){
        if(word[i] == 'N') {
            n++;
        }
        if(word[i] == 'S') {
            s++;
        }
        if(word[i] == 'W') {
            w++;
        }
        if(word[i] == 'E') {
            e++;
        }
    }
    int ch = 0;
    for(int i = 0 ; i<k ;i++){
        if(n<s && n!=0 && s!=0){
            n--;
        }else if(s<n && s!=0 && n!=0){
            s--;
        }else if(w<e && w!=0 &&  e!=0){
            w--;
        }else if(e<w && e!=0 && w!=0){
            e--;
        }else{
            ch++;
        }
    }
    int sum = 0;
    if(s>n){
        sum+=s-n;
    }
    else if(n>=s){
        sum+=n-s;
    }
    if(e>w){
        sum+=e-w;
    }
    else if(w>=e){
        sum+=w-e;
    }
    cout << 2*(sum-ch) << "\n";
    return 0;
}