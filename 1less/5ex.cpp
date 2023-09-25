#include <iostream>

using namespace std;

int _get_banknote_count(int num);
int _get_wallets_count(int banknote_count, int wallet_size);

int main(){
    int n, m;
    cin >> n >> m;

    cout<< _get_wallets_count(_get_banknote_count(n), m) << endl;
    return 0;
}

int _get_banknote_count(int num){
    int res=0;
    
    if(num/5000 != 0){
        res+=num/5000;
        num%=5000;
    }

    if(num/1000!=0){
        res+=num/1000;
        num%=1000;
    }

    if(num/100!=0){
        res+=num/100;
        num%=100;
    }

    if(num/50!=0){
        res+=num/50;
        num%=50;
    }

    if(num/10!=0){
        res+=num/10;
        num%=10;
    }
        
    return res;
}

int _get_wallets_count(int banknote_count, int wallet_size){
    return banknote_count > 0? banknote_count/wallet_size + 
    (((double)banknote_count)/wallet_size != banknote_count/wallet_size ? 1 : 0) : 0;
}