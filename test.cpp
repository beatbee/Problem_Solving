#include <iostream>
#include <vector>
using namespace std;

int N,i,work_count=1;
long long int current,t1,t2;
vector<int> m;

int main(){
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> t1 >> t2;
        m.push_back(t1);
    }

    sort(m.begin(),m.end());
    vector<int>::iterator its;
    for (its = m.begin(); its != m.end(); ++its){
        cout << *its << "\n";
    }
    return 0;
}