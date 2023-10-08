#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int n{0};

    cin>>n;
    int can_bring{0};
    cin >> can_bring;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    sort(&arr[0], &arr[n]);

    int res{0};
    for(int i=n-1;i>=n-can_bring;i--)
        if(arr[i]>0)
            res+=arr[i];

    cout<<res;
    
    return 0;
}