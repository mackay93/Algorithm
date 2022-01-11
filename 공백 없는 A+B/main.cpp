//
//  main.cpp
//  공백 없는 A+B
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, first, second, third, fourth;
    cin >> x;
    if(x < 100)
    {
        second = x%10;
        first = x/10;
        cout <<first+second;
    }
    else if(x >= 100 && x <= 910)
    {
        //xyz
        third = x%10;   //thrd = z;
        x = x/10;       //x = xy;
        second = x%10;  //second = y;
        x = x/10;       //x = x;
        first = x;      //first = x;
        if(third == 0)
        {
            if(second == 0)
            {
                cout << 10;
            }
            else
            {
                cout << first +10;
            }
        }
        else
        {
            cout << 10+third;
        }
    }
    else
    {
        cout << 20;
    }
    return 0;
}
