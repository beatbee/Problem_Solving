/*
    Task	: rail
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 22 December 2022 [20:48]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<list>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n,x,num;
    while(true){
        cin >> n;
        if(n==0){break;}
        while(true){
            list<int> m;
            num = 1;
            for(int i = 1;i<=n;i++){
                cin >> x;
                if(x == 0){
                    break;
                }
                while(num <= n){
                    if(m.front() == x && !m.empty()){
                        m.pop_front();
                        break;
                    }
                    m.push_front(num);
                    num++;
                }
                if(m.front() == x){
                    m.pop_front();
                }
            }
            if(m.empty() && x != 0){
                cout << "Yes\n";
            }
            else if(x == 0){
                cout << "\n";
                break;
            }
            else{
                cout << "No\n";
            }
        }
    }
    return 0;
}