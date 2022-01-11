//
//  main.cpp
//  파도반 수열
//
//  Created by 안대수 on 2021/11/22.
//

#include <iostream>
using namespace std;
unsigned long long arr[101];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;
    arr[6] = 3;
    arr[7] = 4;
    arr[8] = 5;
    arr[9] = 7;
    arr[10] = 9;
    for(int i = 11; i <= 100; i++)
    {
        arr[i] = arr[i-2] + arr[i-3];
    }
    for(int i = 0; i < num; i++)
    {
        int x = 0;
        cin >> x;
        if(x == 2 || x == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << arr[x] << endl;
        }
    }
    return 0;
}
