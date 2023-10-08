#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> wave(vector<int> &A);

int main(){
    int size;
    cin >> size;
    vector<int> enumerable;

    int x;
    for(int i=0;i<size;i++){
        cin>>x;
        enumerable.push_back(x);
    }

    auto wave_enumerable = wave(enumerable);
    for(int i=0;i<wave_enumerable.size();i++)
        cout<<wave_enumerable[i]<<" ";

    return 0;
}


vector<int> wave(vector<int> &A) {
    sort(begin(A), end(A));
    
    for(int i=0;i<A.size()-1;i+=2)
    {
        swap(A[i], A[i+1]);
    }
    
    return A;
}