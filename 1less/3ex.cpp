#include <iostream>
#include <string>

using namespace std;

int _swap_digits(int num, int a, int b);

int main(){
    int num, a, b;
    cin >> num;
    cin >> a >> b;

    cout << _swap_digits(num, a, b) << endl;
    return 0;
}

int _swap_digits(int num, const int a, const int b){
    int digit_count_x_digit = 1;

    int num_copy = num;
    int i = 0;

    while(num_copy > 0){
        i++;
        digit_count_x_digit*=10;
        num_copy/=10;
    }

    int a_x_digit, b_x_digit;

    int res = 0;

    int digit_count_copy = digit_count_x_digit;

    for(int j=1;j<=i;j++){
        digit_count_copy/=10;
        int cur_digit = - ((num/(digit_count_copy)) -
         (num/digit_count_copy)-(num/digit_count_copy)%10);
        if(j==a) a_x_digit = cur_digit;
        else if(j==b) b_x_digit = cur_digit;
    }

    for(int j = 1; j <= i; j++){
        digit_count_x_digit/=10;

        int cur_digit = - ((num/(digit_count_x_digit)) -
         (num/digit_count_x_digit)-(num/digit_count_x_digit)%10);
        
        if(j==a) res+=b_x_digit*digit_count_x_digit;
        else if(j==b) res+=a_x_digit*digit_count_x_digit;
        else res+=cur_digit*digit_count_x_digit;
    }

    return res;
}

