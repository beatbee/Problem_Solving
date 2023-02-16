#include<iostream>
using namespace std;
int main(){
    int n,k,t,end = 0,s = 1;
    cin>>n>>k>>t;
    while(true){
        s += k;
        s%=n;
        end++;
        if(s == 1){
            break;
        }
        if(s == t){
            end++;
            break;
        }
    }
    cout<<end;
    
    return 0;
}