//
//  main.cpp
//  세수정렬
//
//  Created by 안대수 on 2021/09/30.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
