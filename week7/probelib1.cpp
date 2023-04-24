/*
    Task	: probelib1
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 20 February 2023 [13:45]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include "probelib.h"
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n;
    n = probe_init();
    int l = 0,r = n-1,k;
    while(l<r){
        k = (l+r)/2;
        if(probe_check(l,k)){
            r = k;
        }else{
            l = k+1;
        }
    }
    probe_answer(l);
    return 0;
}