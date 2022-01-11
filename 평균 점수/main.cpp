//
//  main.cpp
//  평균 점수
//
//  Created by 안대수 on 2021/09/30.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5];
    int total = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >>arr[i];
        if(arr[i] < 40)
        {
            total += 40;
        }
        else
        {
            total += arr[i];
        }
    }
    cout << total/5;
    return 0;
}
