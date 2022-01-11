//
//  main.cpp
//  분수찾기
//
//  Created by 안대수 on 2021/07/01.
//

//못푼 문제 
#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0, total = 0, i = 1;
    cin >> num;
    while(total < num)
    {
        total += i;
        i++;
    }
    cout << i-1;
}
