//
//  main.cpp
//  피보나치 함수
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num = 0;
    int zero_arr[41] = {}, one_arr[41] = {};
    cin >> num;
    zero_arr[0] = 1;
    zero_arr[1] = 0;
    one_arr[0] = 0;
    one_arr[1] = 1;
    //0이 몇번 나오는지 구하는 루프
    for(int i = 2; i <= 40; i++)
    {
        zero_arr[i] = zero_arr[i-1] + zero_arr[i-2];
    }
    //1이 몇번 나오는지 구하는 루프
    for(int i = 2; i <=40; i++)
    {
        one_arr[i] = one_arr[i-1] + one_arr[i-2];
    }
    for(int j = 0; j < num; j++)
    {
        int input=0;
        cin >> input;
        cout<< zero_arr[input] << " " << one_arr[input] << endl;
    }
    return 0;
}
