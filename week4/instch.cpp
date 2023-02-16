/*
    Task	: instch
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 09 January 2023 [22:43]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long int s,f,cnt = 0;
vector<pair <int,int> > v;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> f;
        v.push_back(make_pair(f,s));
    }
    sort(v.begin(),v.end());
    long long int start = v[0].first;
    for(int i=0;i<v.size();i++){
        if(v[i].second >= start){
            cnt+=1;
            start = v[i].first;
        }   
    }
    cout << cnt+1;
    return 0;
}
/*
1 2
1     4 //
  2   4
    3 4
2
1 2
1   3
  2   4
    3 4
      4 5
*/