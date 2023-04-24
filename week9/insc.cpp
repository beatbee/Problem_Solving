/*
    Task	: weightinterval
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 03 April 2023 [22:50]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<algorithm>
using namespace std;
int mem[1010],num[1010],mx = -1e9,ans[1010];
int insc(int n){
    for(int i =1 ; i<n;i++){
        for (int j = 0 ; j <i ;j++){
            if(num[i] > num[j]){
                mem[i] = max(mem[i],mem[j]+1);
            }
            if(mem[i] > mx){
                mx = mem[i];    
            }
        }
    }
    return mx;    
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,cnt = 0;
    cin >> n ;
    for(int i = 0 ; i <n ;i++){
        cin >> num[i];
    }
    int mx = insc(n);
    int mx1 = mx; 
    for(int k = n-1;k>=0;k--){
        if(mem[k] == mx1){
            ans[cnt] = num[k];   
            cnt++;
            mx1--; 
        }
    }
    cout << cnt << "\n";
    int j = cnt-1;
    while(j>=0){
         cout << ans[j] << " "; 
         j--;
    }

    return 0;
}