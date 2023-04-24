#include<iostream>
#include <cstring>
using namespace std;
char a[105];
int main(){
    int i,x=0,y=0;
    cin >> a;
    for(i=0;i<strlen(a);i++){
        if(a[i]=='N'){
            y++;
        }
        else if(a[i]=='S'){
            y--;
        }
        else if(a[i]=='E'){
            x++;
        }
        else if(a[i]=='W'){
            x--;
        }
        else{
            x = 0;
            y = 0;
        }
    }
    cout << x << " " << y;
    return 0;
}