#include <iostream>

using namespace std;

int _change_digit(int num);

int main(){
    int num;

    cin >> num;
    cout << _change_digit(num)<<endl; 

    return 0;
}

int _change_digit(int num){
    int second_digit = (num/1000)%10;
    int fourth_digit = (num%100)/10;

    return (num-num%10000) + fourth_digit*1000 + 
        ((num/100)%10)*100 + second_digit*10 +num%10;
}



