//
//  main.cpp
//  세 수
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3];
    for(int i =0 ; i<3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+3);
    cout << arr[1];
    return 0;
}
