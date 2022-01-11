//
//  main.cpp
//  과목선택
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b)
{
    return a > b;
    
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int science[4], etc[2];
    for(int i = 0; i < 4; i++)
    {
        cin >> science[i];
    }
    for(int i = 0; i < 2; i++)
    {
        cin >> etc[i];
    }
    sort(science, science+4, desc);
    sort(etc, etc+2, desc);
    cout << science[0] + science[1] + science[2] + etc[0];
    return 0;
}
