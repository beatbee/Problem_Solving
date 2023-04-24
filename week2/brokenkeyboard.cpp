/*
    Task	: brokenkeyboard
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 20 December 2022 [22:56]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){
    string word;
    while(getline(cin,word)){ 
        list<char> m; 
        list<char>::iterator it = m.begin();
        for(int i=0;i<word.size();i++){
            if(word[i] == '['){
                it = m.begin();
            }
            else if(word[i] == ']'){
                it = m.end();
            }
            else{
                m.insert(it,word[i]);
            }
        }
        for (it = m.begin(); it != m.end(); ++it){
            cout << *it;
        }
        cout << "\n";
    }
    return 0;
}
