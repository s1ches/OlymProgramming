#include <iostream>

using namespace std;

int _get_digit_count(int num);

int main(){
    int num;
    cin >> num;
    cout << _get_digit_count(num) << endl;
    return 0;
}

int _get_digit_count(int num){
    int res = 0;
    while(num > 0){
        num/=10;
        res++;
    }

    return res;
}