#include<iostream>
#include<list>
using namespace std;
int main(){
    int n;
    while(1){
        list<int> m;
        cin >> n;
        if (n==0){break;}
        for(int i=1;i<=n;i++){
            m.push_back(i);
        }
        cout << "Discarded cards:";
        while(m.size() >= 2){
            cout << " " << m.front();
            m.pop_front();
            if(m.size() != 1){
                cout << ",";
            }
            m.push_back(m.front());
            m.pop_front();
        }
        cout << "\nRemaining card: ";
        cout << m.front() << endl;
    }
    return 0;
}