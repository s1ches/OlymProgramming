#include <iostream>
#include <math.h>

using namespace std;

int _get_prime_num_count(int left, int right);
bool _is_prime(int num);

int main(){
    int left, right;
    cin >> left >> right;

    cout << _get_prime_num_count(left, right) << endl;

    return 0;
}

int _get_prime_num_count(int left, int right){
    int res = 0;

    for(int i = left; i <= right; i++){
        if(_is_prime(i))
            res++;
    }

    return res;
}

bool _is_prime(int num){
    if(num == 2) return true;

    for(int i=2;i <= sqrt(num)+1; i++)
        if(num%i==0) return false;
    
    return true;
}