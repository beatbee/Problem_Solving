/*
    Task	: name
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 23 January 2023 [17:35]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<string.h>
using namespace std;
char word[100];
char name[100001];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    cin >> word;
    cin >> name;
    int i = 0;
    int j = 0,ans = 0;
    while(name[i] != '\0'){
        if(name[i] == word[j]){
            j++;
        }

        if(j == strlen(word)){
            ans+=1;
            j = 0;
        }
        else if(j > strlen(word)){
            j = 0;
        }
        i++;
    }
    cout << ans;
    return 0;
}