#include <iostream>

using namespace std;

int _get_prime_num_count(int left, int right);

int main(){
    int left, right;
    cin >> left >> right;

    cout << _get_prime_num_count(left, right) << endl;

    return 0;
}

int _get_prime_num_count(int left, int right){
    const int size = right - left + 1;
    bool arr[size];

    for(int i=0;i<size;i++)
        arr[i]=true;

    int j = 0;
    int div = 2;

    for(int i=left;i <= right; i++, j++){
        if(arr[j] && i%div == 0 && div!=i){
            int counter = j;
            for(int k = i; k <= right; k+=div){
                arr[counter]=false;
                counter+=div;
            }
            div++;
        }
    }

    int res=0;
    for(int i=left, j = 0;i<=right;i++, j++){
        if(arr[j])
            res++;
    }

    return res;
}
