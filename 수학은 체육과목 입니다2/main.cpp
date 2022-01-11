//
//  main.cpp
//  수학은 체육과목 입니다2
//
//  Created by 안대수 on 2021/10/09.
//  규칙찾기가 어려웠던 문제
//  6,7,8을 제외한 나머지 숫자는 -8을해주면 답이 바로 나오고 6,7,8에대한 예외 처리만 해주었다.

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    if(num <= 5)
    {
        cout << num;
    }
    else
    {
        while(num > 5)
        {
            num -= 8;
        }
        if(num <= 0)
        {
            cout << 2 - (num);
        }
        else
        {
            cout << num;
        }
    }
    return 0;
}
