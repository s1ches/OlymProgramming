#include <map>
#include <set>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> my_set;

    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        my_set.insert(x);
    }

    cout<< my_set.size();
    return 0;
}