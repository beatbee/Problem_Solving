/*
    Task	: agesort
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 20 February 2023 [13:58]
    Algo	: 
    Status	: 
*/
#include<iostream>
using namespace std;
int a[2000001],temp[2000001];
void mergesort(int l,int r){
    if(l==r) return;
    int mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=r){
        if(a[i]<a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
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
void mergesort2(int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergesort2(l,mid);
        mergesort2(mid+1,r);
        merge(l,mid,r);
    }
}
void merge(int l,int mid,int r){
    int i=mid-l+1,j=r-mid;
    int L[i],R[j];
    for(int k=0;k<i;k++){
        L[k] = a[l+k];
    }
    for(int k=0;k<j;k++){
        R[k] = a[mid+1+k];
    }
    int i1=0,j1=0,k1=l;
    while(i1<i && j1<j){
        if(L[i1]<R[j1]){
            a[k1++] = L[i1++];
        }
        else{
            a[k1++] = R[j1++];
        }
    }
    while(i1<i){
        a[k1++] = L[i1++];
    }
    while(j1<j){
        a[k1++] = R[j1++];
    }
    

}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n;
    while(true){
        cin >> n;
        if(n==0) break;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        mergesort(0,n-1);
        for(int i=0;i<n;i++){
            cout << a[i];
            if(i==n-1) cout << "\n";
            else cout << " ";
        }
    }
    return 0;

}