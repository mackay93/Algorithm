//
//  main.cpp
//  소수구하기(에라토스테네스)
//
//  Created by 안대수 on 2021/08/28.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num1 = 0, num2 = 0;
    
    int arr[1000001] = {};
    cin >> num1 >>num2;
    
    for(int i = 0; i <= num2; i++)
    {
        arr[i] = i;
    }
    for(int i = 2; i <=sqrt(num2); i++)
    {
        if(arr[i] == 0)
        {
            continue;
        }
        for(int j = i*i; j <= num2; j+=i)
        {
            arr[j] = 0;
        }
    }
    
    for(int i = num1; i <= num2; i++)
    {
        if(i==1)
        {
            continue;
        }
        if(arr[i] != 0)
        {
            cout <<arr[i] << "\n";
        }
    }
    return 0;
}
