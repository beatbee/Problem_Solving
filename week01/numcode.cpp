/*
    Task	: numcode
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 28 November 2022 [22:56]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int a[60],b[60],c[60];
int main(){
    int n,t,i;
    cin >> n >> t;
    for(i = 0;i<n;i++){
        cin >> a[i];
    }
    if(t==1){
        if(a[0] == n-1){
                b[0] = 0;
        }
        else{b[0] = 1;}
        for(i=1;i<n;i++){
            if(a[i-1] == a[i]-1){b[i] = 1;}
            else{b[i] = 0;}
        }
    }
    if(t==2){
        b[0] = a[0];
        for(i=1;i<n;i++){
            if((a[i]-b[i-1]) < b[i-1]){
                b[i] = a[i]-b[i-1];
         }
            else{b[i] = a[i] - 2*b[i-1];}
        }
        if(b[0] == n-1){
                c[0] = 0;
        }
        else{c[0] = 1;}
        for(i=1;i<n;i++){
            if(b[i-1] == b[i]-1){c[i] = 1;}
            else{c[i] = 0;}
        }
    }
    for(i=0;i<n;i++){
        if(t==1){cout << b[i] << "\n";}
        else{cout << c[i] << "\n";}
        
    }
    return 0;
}