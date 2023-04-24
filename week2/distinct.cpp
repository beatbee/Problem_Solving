/*
    Task	: distinct
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 21 December 2022 [23:07]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<set>
using namespace std;
int food[105];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,i,sum = 0;
    cin >> n;
    set<int> s;
    for(i=0;i<n;i++){
        cin >> food[i];
        s.insert(food[i]);
    }
    for(i=0;i<n;i++){
        sum = food[i];
        for(int j=i+1;j<n;j++){
            sum += food[j];
            s.insert(sum);
        }
    }
    cout << s.size();
    return 0;
}