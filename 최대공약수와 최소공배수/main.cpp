//
//  main.cpp
//  최대공약수와 최소공배수
//
//  Created by 안대수 on 2021/10/13.
//

#include <iostream>
using namespace std;

int isLCM (int a, int b)
{
    int i = 1;
    while(true)
    {
        if((a*i)%b == 0)
        {
            break;
        }
        i++;
    }
    return a * i;
}

int isGCD (int a, int b)
{
    int r = a%b;
    if(r == 0)
    {
        return b;
    }
    else
    {
        return isGCD(b, r);
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y, bigger, smaller;
    cin >> x >> y;
    bigger = (x > y)? x : y;
    smaller = (x < y)? x : y;
    cout << isGCD(bigger, smaller) << endl << isLCM(bigger, smaller);
    return 0;
}
