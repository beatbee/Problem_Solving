#include <iostream>
using namespace std;
int main()
{
   int N,a,b,R,i;
   int x,y,s,d,h;
   int ans = 0;
    cin >> N >> a >> b >> R;
    for(i=1;i<=N;i++){
        cin >> x >> y;
        s = (x-a)*(x-a);
        d = (y-b)*(y-b);
        h=s+d;
        if(h<= R*R ){
            ans+=1;
        }
    }
    cout << ans << "\n";
    return 0;
}