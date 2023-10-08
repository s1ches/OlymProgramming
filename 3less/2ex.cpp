#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int n{0};

    cin >> n;

    int matrix[n][3]{};
    
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            cin>>matrix[i][j];


    int arr[n]{};
    for(int i=0;i<n;i++)
        arr[i] = matrix[i][0]*3600 + matrix[i][1]*60 + matrix[i][2];  
    
    sort(&arr[0],&arr[n]);

    for(int i=0;i < n; i++)
        cout << arr[i]/3600 <<" "<< (arr[i]%3600)/60<< " " << (arr[i]%3600)%60 << "\n";
    
    return 0;
}