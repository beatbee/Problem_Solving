#include<iostream>
using namespace std;
int a[100005],b[100005];
int main(){
    int n,i,cnt = 0,ans = 0,j = 1,mx=-1,k=0;
    cin>>n;
    for(i=1;i<n+1;i++){
        cin>>a[i];
    }
    while(true){
        if(b[j] == 0){
            b[j] = 1;
        }
        if(b[a[j]] == 0){
            b[a[j]] = 1;
            cnt++;
            j = a[j];
        }
        else if(b[a[j]] == 1 ){
            cnt++;
            //cout << cnt;
            if(cnt>mx){
                mx = cnt;
            }
            cnt = 0;
            k = 0;
            for(i=1;i<n+1;i++){
                if(b[i] == 0){
                    j = i;
                    break;
                }
                else{
                    k +=1;
                }
            }
        }
        if(k == n){
            break;
        }   
    }
    cout << mx;
    return 0;
}