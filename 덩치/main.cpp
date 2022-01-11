//
//  main.cpp
//  덩치
//
//  Created by 안대수 on 2021/11/02.
//

#include <iostream>
#include <memory.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n = 0;
    cin >> n;
    int arr[n][2];
    int result[n];
    memset(arr, -1, sizeof(arr[0][0]));
    //memset(result, -1, sizeof(result[0]));
    for(int i = 0; i < n; i++)
    {
        result[i] = 1;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
            {
                result[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << result[i] << "\n";
    }
    return 0;
}
