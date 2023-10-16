#include <map>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.get();

    map<int,vector<int>> my_dict;
    int id;
    
    for(int i=1;i<=n;i++){
        while(cin.peek()!='\n'){
            cin>>id;
            my_dict[id].push_back(i);
        }
        cin.get();
    }

    cout<<endl;

    for(auto& item : my_dict)
    {
        cout<<item.first << " ";
        cout<<item.second.size()<<" ";

        for(int i=0;i<item.second.size();i++){
            cout<<item.second[i] << " ";
        }

        cout<<endl;
    }


    return 0;
}