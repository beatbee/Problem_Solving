#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
pair<double, double> ans[1010];
int main()
{
    double x, y, d;
    int n,i, cou = 0,sol = 0,anss = 0;
    //cin >> n >> d;
    while((cin >> n >> d) && n) {
        //if(n == 0 && d == 0) break;
        sol = 0;
        for(i = 0; i < n; i++) {
            cin >> x >> y;
            if(y > d) {
                sol = 1;
            }
            else {
                double s = sqrt(d*d - y*y);
                ans[i].first = x - s;
                ans[i].second = x + s;
            }
        }
        if(sol){
            anss = -1;
        }
        else{
            int cnt = 0;
            double r = -1e9;
            sort(ans, ans+n);
            int j = 0;
            while(j < n) {
                while(j < n && ans[j].first <= r) {
                    if(r >= ans[j].second){
                        r = ans[j].second;
                    }
                    j++;
                }
                cnt++;
                r = ans[j].second;
            }
            anss = cnt-1;

        }
        cou++;
        cout << "Case " << cou << ": " << anss << "\n"; 
    }


    return 0;
}