//
//  main.cpp
//  CASIO
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <string.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.compare(str2) == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
