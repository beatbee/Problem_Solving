/*
    Task	: train
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 19 December 2022 [15:44]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<list>
using namespace std;
int main(){
    int n,x,i,j;
    char input;
    list<int> m[100002];
    cin >> n;
    for(int a=0;a<n;a++){
        cin >> input ;
        if(input == 'N'){
            cin >> x >> i;
            m[i].push_back(x);

        }
        if(input == 'M'){
            cin >> i >> j;
            if(m[i].size() > 0 && i != j){
               m[j].splice(m[j].end(),m[i]); 
            }
            else if(m[j].size() < 0){
                m[j].push_back(0);
                m[j].splice(m[j].end(),m[i]);
            }
        }
    }
    for (int a=0;a<100001;a++){
        list<int>::iterator its;
        for (its = m[a].begin(); its != m[a].end(); ++its){
            cout << *its << "\n";
        }
    }
    return 0;
}