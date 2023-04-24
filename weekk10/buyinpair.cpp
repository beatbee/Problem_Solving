/*
    Task	: buyinpair
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 07 April 2023 [00:33]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<algorithm>
using namespace std;
long long mem[100010];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    long long n,a,b;
    cin >> n >> a >> b;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mem[i] =x;
    }
    long long sol = 0;
    sort(mem,mem+n);
    for(int j = 0;j<n;j++){
       long long qq = lower_bound(mem,mem+n,mem[j]+a)-mem;
         long long ww = upper_bound(mem,mem+n,mem[j]+b)-mem;
         if(qq == j) {
                qq+=1;
         }
         if(mem[qq] < mem[j]){
            qq = j+1;   
         }
         if(mem[ww-1] < mem[j] || ww-1 == j){
            break;
         }
        sol+= ww-qq;
    }
    cout << sol << "\n";
    return 0;
}