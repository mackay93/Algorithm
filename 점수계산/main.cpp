//
//  main.cpp
//  점수계산
//
//  Created by 안대수 on 2021/10/20.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[101];
    memset(arr, -1, sizeof(arr));
    int num = 0, sum = 0, count = 1;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    if(arr[0] == 1)
    {
        sum = 1;
    }
    for(int j = 1; j <=num; j++)
    {
        if(arr[j-1] == 0 && arr[j] == 0)
        {
            continue;
        }
        else if(arr[j-1] == 0 && arr[j] == 1)
        {
            count = 1;
            sum += count;
        }
        else if(arr[j-1] == 1 && arr[j]== 0)
        {
            count = 1;
        }
        else if(arr[j-1] == 1 && arr[j] ==1)
        {
            count++;
            sum += count;
        }
    }
    cout << sum;
    return 0;
}
