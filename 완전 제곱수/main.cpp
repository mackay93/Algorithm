//
//  main.cpp
//  완전 제곱수
//
//  Created by 안대수 on 2021/10/12.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isInteger(double x)
{
    if(x - int(x) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y, count = 0, smallest = 0, sum =0;
    cin >> x >> y;      //60 ~ 100
    for(int u = x; u <= y; u++)
    {
        if(isInteger(sqrt(u)))
        {
            if(count == 0)
            {
                smallest = u;
            }
            count++;
            sum += u;
        }
    }
    if(count ==0)
    {
        cout << "-1";
    }
    else
    {
        cout << sum << endl << smallest;
    }
    return 0;
}
