#include <iostream>
#include <math.h>

using namespace std;

bool _is_prime(int num);

int main(){
    int num;
    cin >> num;

    if(_is_prime(num)) cout << "YES" <<endl;
    else cout << "NO" << endl;

    return 0;
}

bool _is_prime(int num){
    if(num == 2) return true;

    for(int i=2;i <= sqrt(num)+1; i++)
        if(num%i==0) return false;
    
    return true;
}
