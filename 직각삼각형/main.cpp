//
//  main.cpp
//  직각삼각형
//
//  Created by 안대수 on 2021/10/26.
//

#include <iostream>
#include <memory.h>
#include <algorithm>
#include <cmath>
using namespace std;
#define EL "\n"
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[3];
    memset(arr, -1, sizeof(arr[0]));
    while(1)
    {
        for(int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
        {
            break;
        }
        sort(arr,arr+3);
        if(pow(arr[2],2) == (pow(arr[0],2) + pow(arr[1],2)))
        {
            cout << "right" << EL;
        }
        else
        {
            cout << "wrong" << EL;
        }
    }
    
    return 0;
}
