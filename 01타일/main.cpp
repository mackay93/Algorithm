//
//  main.cpp
//  01타일
//
//  Created by 안대수 on 2021/11/22.
//

#include <iostream>

using namespace std;
int arr[1000001];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 5;
    arr[5] = 8;
    for(int i = 6; i <= 1000000; i++)
    {
        arr[i] = ((arr[i-1] + arr[i-2]) %15746);
    }
    cout <<arr[num];
    return 0;
}
