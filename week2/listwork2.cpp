#include<iostream>
#include<list>
using namespace std;
int main(){
    int n,num;
    char input;
    list<int> m;
    list<int>::iterator it = m.begin();
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input >> num;
        if(input == 'I'){
            m.push_front(num);
        }
        if(input == 'A'){
            m.push_back(num);
        }
        if(input == 'D' && num <= m.size()){
            it = m.begin();
            for(int i = 0;i < num-1;i++){
                it++;
            }
            m.erase(it);

        }
    }
     list<int>::iterator its;
    for (its = m.begin(); its != m.end(); ++its){
        cout << *its << "\n";
    }
    return 0;
}