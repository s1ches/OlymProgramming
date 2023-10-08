#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int> &A);

int main(){
    int size;
    cin >> size;
    vector<int> A;

    int x;
    for(int i=0;i<size;i++){
        cin>>x;
        A.push_back(x);
    }

    cout << solve(A) << endl;

    return 0;
}

int solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int size = A.size();

    for(int i=0;i<A.size();){
        if(size < A[i]) return -1;
        int temp = A[i];

        int k = i;
        while(A[k]==A[i] && i < A.size()) i++;

        if(A.size() - i == temp)
            return 1;
    }

    return -1;
}