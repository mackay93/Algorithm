//
//  main.cpp
//  별 찍기 - 4
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        for(int j = i; j >0; j--)
        {
            cout <<" ";
        }
        for(int k = i; k < x; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
