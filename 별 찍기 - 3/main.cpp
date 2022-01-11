//
//  main.cpp
//  별 찍기 - 3
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        for(int j = i; j < num; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
