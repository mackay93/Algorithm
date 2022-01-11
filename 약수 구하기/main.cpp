//
//  main.cpp
//  약수 구하기
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[10001] = {};
    int N = 0, K = 0, count = 0;
    cin >> N >> K;
    for(int i = 1; i <= N; i++)
    {
        if(N%i == 0)
        {
            arr[i]++;
        }
    }
    for(int x = 1; x <= N; x++)
    {
        if(arr[x] == 1)
        {
            ++count;
            if(count == K)
            {
                cout << x;
                return 0;
            }
        }
    }
    if(count < K)
    {
        cout << "0";
    }
    return 0;
}
