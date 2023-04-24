/*
    Task	: mars
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 04 April 2023 [00:42]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> fr,dis;
int head(int a){
    if(fr[a] == a){
        return a;
    }
    else{
        return head(fr[a]);
    }
}
void unionset(int x, int y){
    if(dis[x] > dis[y]){
        fr[y] = x;
    }
    else if(dis[x] < dis[y]){
        fr[x] = y;
    }
    else{
        fr[y] = x;
        dis[x] ++ ;
    }
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,m,k,ans;
    cin >> n >> m >> k;
    int i = 0;
    while(n--){
        fr.push_back(i);
        dis.push_back(0);
        i++;
    }
    while(m--){
        int x,y;
        cin >> x >> y;
        int head1 = head(x-1);
        int head2 = head(y-1);
        if(head1 != head2){
            unionset(head1,head2);
        }
    }
    for(int a = 0;a<k;a++){
        int x,y;
        cin >> x >> y;
        int head1 = head(x-1);
        int head2 = head(y-1);
        if(head1 == head2){
            ans = 1;
            cout << ans << "\n";   
        }
        else{
            ans = 0;
            cout << ans << "\n";
        }

    }
    return 0;
}