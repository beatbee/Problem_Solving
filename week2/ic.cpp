/*
    Task	: ic
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 19 December 2022 [13:18]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<string>
#include <list>
#include <iterator>
using namespace std;
int main(){
    int n,num,tmp;
    string word;
    list<int> m;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> word;
        if(word == "ri"){
            cin >> num;
            m.push_back(num);
        }
        if(word == "li"){
            cin >> num;
            m.push_front(num);
        }
        if(word == "lr" && m.size() > 0){
            tmp = m.front();
            m.pop_front();
            m.push_back(tmp);
        }
        if(word == "rr" && m.size() > 0){
            tmp = m.back();
            m.pop_back();
            m.push_front(tmp);
        }
    }
    list<int>::iterator it;
    for (it = m.begin(); it != m.end(); ++it){
        cout << *it << "\n";
    }
    return 0;
}