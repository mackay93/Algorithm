//
//  main.cpp
//  블랙잭
//
//  Created by 안대수 on 2021/11/06.
//
// 브루트 포스
#include <iostream>
#include <memory.h>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N = 0, M = 0, result = 0;
    cin >> N >> M;
    int arr[N];
    for(int x = 0; x < N; x++)
    {
        cin >> arr[x];
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = i +1; j < N; j++)
        {
            for(int k = j + 1; k < N; k++)
            {
                if(arr[i] + arr[j] + arr[k] <= M && arr[i] + arr[j] + arr[k] > result)
                {
                    result = arr[i] + arr[j] + arr[k];
                }
            }
        }
    }
    cout << result;

    return 0;
}
