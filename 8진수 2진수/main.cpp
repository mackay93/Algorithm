//
//  main.cpp
//  8진수 2진수
//
//  Created by 안대수 on 2021/11/01.
//

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str = "";
    cin >> str;
    reverse(str.begin(), str.end());
    int num = stoi(str);
    if(num == 0)
    {
        cout << 0;
        return 0;
    }
    int arr[str.length()];
    for(int i = (int)str.length()-1; i >= 0; i--)
    {
        arr[i] = num % 10;
        num = num / 10;
    }
    unsigned long long ten = 0;
    for(int i = 0; i < str.length(); i++)
    {
        ten += arr[i] * pow(8,i);
    }
    string result = "";
    while(ten != 1)
    {
        if(ten % 2 == 0)
        {
            result.append("0");
        }
        else
        {
            result.append("1");
        }
        ten /= 2;
    }
    result.append("1");
    reverse(result.begin(), result.end());
    cout << result;
    return 0;
}
