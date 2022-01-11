//
//  main.cpp
//  거스름돈
//
//  Created by 안대수 on 2022/01/01.
//

#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0, count = 0;
    cin >> num;
    num = 1000 - num;
    
    while(1)
    {
        if(num == 0)
        {
            break;
        }
        else if(num >= 500)
        {
            num -= 500;
            count++;
        }
        else if(num >= 100)
        {
            num -= 100;
            count++;
        }
        else if(num >= 50)
        {
            num -= 50;
            count++;
        }
        else if(num >= 10)
        {
            num -= 10;
            count++;
        }
        else if(num >= 5)
        {
            num -= 5;
            count++;
        }
        else
        {
            num -= 1;
            count++;
        }
    }
    cout << count;
    return 0;
}
