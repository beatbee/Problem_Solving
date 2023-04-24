#include<iostream>
using namespace std;
int main()
{
    int n,m,k,a,i,b=0,ans =0;
    cin >> n >> m >> k;
    for(i=0;i<n;i++){
        cin >> a;
        a+=b;
        if(a>=m && a>=k && b>=0){
            b = a-k;

        }
        else if(a>=m && a<k ){
            b=0;
            ans++;
        }
        else{
            ans = -1;
            break;
        }

    }

    cout << ans << "\n";
    return 0;
}