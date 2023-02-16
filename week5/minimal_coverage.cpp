/*
    Task	: minimal_coverage
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 28 January 2023 [15:33]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,end,j=0,cnt=0;
    cin >> n ;
    cout << "\n";
    for(int i=0;i<n;i++){
        pair<int,int> v[100001],s,ans[100001];
        cin >> end;
        while(true){
            int a,b;
            cin >> a >> b;
            if(a==0 && b==0) {
                break;
            }
            if(a>=end || b<=0) continue;
            v[j].first = a;
            v[j].second = b;
            j++;
        }
        sort(v,v+j);
        s.first = 0;
        s.second = 0;
        int now = 0,k=0;
        while(k<j){
            if(now >= end){
               break; 
            }
            s.first = 0;
            s.second = 0; 
            while(v[k].first <= now){
                if(v[k].second > s.second){
                    s.second = v[k].second;
                    s.first = v[k].first;
                }
                k++;
            }
            if(s.second == now) break;
            now = s.second;
            ans[cnt] = s;
            cnt++;
        }
        if(now >= end){
            cout << cnt << "\n";
            for(int i=0;i<cnt;i++){
                cout << ans[i].first << " " << ans[i].second << "\n";
            }
        }
        else{
            cout << "0\n";
        }
        
    
        j = 0;cnt = 0;

    }
    return 0;
}
/*

*/