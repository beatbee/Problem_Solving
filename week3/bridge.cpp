#include<iostream>
using namespace std;
int a[5000];
int main(){
    int l,x,y,n,i,mx = -1e9;
    cin >> l >> n;
    l*=10;
    while(n--){
        cin >> x >> y;
        x*=10;
        y*=10;
        for(i=x+1;i<=y-1;i++){
            a[i]++;
        }
    }
    for(i=0;i<=l;i++){
            mx = max(mx,a[i]);

    }
    cout << mx << endl;
    return 0;
}
