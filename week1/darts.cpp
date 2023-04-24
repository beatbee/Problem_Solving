#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n,x=0,y=0,ans=0,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        if(sqrt(x*x + y*y) <= 2){
            ans+=5;
        }
        else if(sqrt(x*x + y*y) <= 4){
            ans+=4;
        }
        else if(sqrt(x*x + y*y) <= 6){
            ans+=3;
        }
        else if(sqrt(x*x + y*y) <= 8){
            ans+=2;
        }
        else if(sqrt(x*x + y*y) <= 10){
            ans+=1;
        }
    }
    cout<<ans;
    return 0;
}