//
//  main.cpp
//  특별한 날
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int month, day;
    string res;
    cin >> month >> day;
    if(month < 2)
    {
        res = "Before";
    }
    else if(month == 2)
    {
        if(day < 18)
        {
            res = "Before";
        }
        else if(day == 18)
        {
            res = "Special";
        }
        else
        {
            res = "After";
        }
    }
    else
    {
        res = "After";
    }
    cout << res;
    return 0;
}
