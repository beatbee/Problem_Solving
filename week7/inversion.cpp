#include<iostream>
using namespace std;
long long a[2000001],temp[2000001],cnt = 0;
void countinversion(int l,int r){
    if(l==r) return;
    int mid = (l+r)/2;
    countinversion(l,mid);
    countinversion(mid+1,r);
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=r){
        if(a[i]<a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
            cnt += mid-i+1;
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=r){
        temp[k++] = a[j++];
    }
    for(int i=l;i<=r;i++){
        a[i] = temp[i];
    }
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++){
        cin >> a[i];
    }
    countinversion(0,n-1);
    cout << cnt << "\n";
    return 0;

}