//
//  main.cpp
//  16진수
//
//  Created by 안대수 on 2021/09/20.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string sixteen;
    int res = 0;
    cin >> sixteen;
    for(int i = 0; i < sixteen.size(); i++)
    {
        if((int)sixteen[i] >= 65)
        {
            res += (((int)sixteen[i]) -55) * (pow(16,sixteen.size()-1-i));
        }
        else
        {
            res += ((int)sixteen[i] - 48) * (pow(16,sixteen.size()-1-i));
        }
    }
    cout << res;
    
    return 0;
}
