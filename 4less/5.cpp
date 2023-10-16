#include<vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solve(vector<int> &A, int B) {
    int res{};
    
    for(int i=0;i<B;i++)
        res+=(*(max_element(A.begin(),A.end())))--;
    
    return res;
}

int main(){
    int n; cin>>n;

    vector<int> my_vector;
    int x;

    for(int i=0;i<n;i++) {
        cin>>x;
        my_vector.push_back(x);
    }

    int b; cin>>b;

    auto res = solve(my_vector, b);
    
    cout<<res<<endl;


    return 0;
}