#include<iostream>
using namespace std;
int a[1010];
int main()
{
    int m,n,i,j,ans=0,k=0,h=0;
    cin >> n >> m;

    for(i=1;i<=n;i++){
        cin >> a[i];

    }

    while(m--){
       cin >> k;
        h+=k;
        h+=a[h];
        if(h<1){
            h =0;
        }
        if(h>n){
            h=n;
        }
    }

   cout << h << "\n";

    return 0;

}