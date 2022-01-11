//
//  main.cpp
//  사탕 선생 고창영
//
//  Created by 안대수 on 2021/10/13.
//
// 한번에 모아서 나누지 말고 더할 때 마다 나눠서 문제를 풀어야한다.

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int total_case = 0;
    string str;
    cin >> total_case;
    cin >> str;
    for(int i = 0; i < total_case; i++)
    {
        int students = 0;
        unsigned long long total_candy = 0;
        cin >> students;
        for(int k = 0; k < students; k++)
        {
            long long candy = 0;
            cin >> candy;
            total_candy += candy;
        }
        if(total_candy % students == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
