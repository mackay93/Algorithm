//
//  main.cpp
//  수 찾기
//
//  Created by 안대수 on 2021/11/08.
//

#include <iostream>
#include <algorithm>
using namespace std;
int x,y;

bool find(int target)
{
    int left = 1, right = 10;
    int mid = (left + right) / 2;
    while(left <= right)
    {
        if(mid == target)
        {
            cout << true;
            break;
        }
        else if(mid > target)
        {
            right = mid -1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+x);
    cin >> y;
    int arr2[y];
    for(int j = 0; j < y; j++)
    {
        cin >> arr2[j];
    }
    sort(arr2,arr2+y);
    for(int k = 0; k < y; k++)
    {
        cout << find(arr2[k]) << endl;
    }
}
