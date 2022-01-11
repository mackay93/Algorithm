//
//  main.cpp
//  팀 나누기
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[4];
    for (int i =0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+4);
    cout << abs((arr[0]+arr[3]) - (arr[1] + arr[2]));
    return 0;
}
