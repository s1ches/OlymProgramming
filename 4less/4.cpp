#include <iostream>
#include <vector>
#include<map>

using namespace std;

vector<int> dNums(vector<int> &A, int B) {
    vector<int> result;
    
    if(B > A.size())
        return result;
        
    map<int,int> temp;
    
    for(int i=0;i < A.size(); i++){
        temp[A[i]]++;
            
        if(i >= B-1){
            result.push_back(temp.size());
            temp[A[result.size()-1] ]--;
            if(temp[A[result.size()-1]]==0)
                temp.erase(A[result.size()-1]);
        }
    }
    
    return result;
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

    auto res = dNums(my_vector, b);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\t";
    }

    return 0;
}