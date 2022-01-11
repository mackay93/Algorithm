//
//  main.cpp
//  피보나치 수 2
//
//  Created by 안대수 on 2021/10/13.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long arr[90];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i<=90; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    int x;
    cin >> x;
    cout << arr[x];
    return 0;
}
