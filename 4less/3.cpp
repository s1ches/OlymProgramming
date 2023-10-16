#include <iostream>
#include <map>

using namespace std;

// Задача 3. Дано n и n запросов вида:
// 1 х - добавить шар с числом х в мешок.
// 2 х - убрать ОДИН шар с числом х из мешка.
// В конце выдать сколько есть уникальных чисел на шарах в мешке.
// n,х<=10^5

int main(){
    int n;
    cin>>n;

    int operation;
    int ball_number;

    map<int,int> balls;

    for(int i=0;i<n;i++){
        cin>>operation;
        cin>>ball_number;
        switch (operation){
            case 1:
                if(balls.find(ball_number) == balls.end())
                    balls[ball_number] = 0;

                balls[ball_number]++;
                break;
            case 2:
                balls[ball_number]--;
                if(balls[ball_number] == 0)
                    balls.erase(ball_number);
                break;
        }
    }

    cout<<balls.size()<<endl;

    return 0;
}