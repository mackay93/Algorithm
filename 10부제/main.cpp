//
//  main.cpp
//  10부제
//
//  Created by 안대수 on 2021/09/30.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, count = 0;
    int arr[5];
    cin >> x;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(x == arr[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
