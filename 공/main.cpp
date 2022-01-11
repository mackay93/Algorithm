//
//  main.cpp
//  공
//
//  Created by 안대수 on 2022/01/03.
//

#include <iostream>
#include <array>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    array<int,4> arr;       //int형 array 선언.
    for(int i = 0; i < 4; i++)
    {
        arr[i] = i;
    }
    int num = 0;
    cin >> num;
    while(num--)
    {
        int x,y, x_index, y_index;
        cin >> x >> y;
        for(int i = 1; i < 4; i++)
        {
            if(arr.at(i) == x)
            {
                x_index = i;
            }
            if(arr.at(i) == y)
            {
                y_index = i;
            }
        }
        arr[x_index] = y;
        arr[y_index] = x;
    }
    cout << arr[1];
    return 0;
}
