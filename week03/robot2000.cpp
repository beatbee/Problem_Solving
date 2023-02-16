/*
    Task	: robot2000
    Author	: kiki
    School	: Kasetsart University
    Language: C++
    Created	: 26 December 2022 [22:32]
    Algo	: 
    Status	: 
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    char mark[4] = {'N','E','S','W'};
    string robot;
    getline(cin,robot);
    int a = 0;
    for(int i = 0;i<robot.size();i++){
        if(robot[i] == 'Z'){
            a = 0;
            cout << 'Z';
        }
        else if(robot[i] == mark[a]){
            cout << 'F';
        }
        else{
            while(robot[i] != mark[a]){
                a = (a+1)%4;
                cout << 'R';
            }
            cout << 'F';
        }
    }
    return 0;
}