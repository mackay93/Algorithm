//
//  main.cpp
//  KMP는 왜 KMP일까?
//
//  Created by 안대수 on 2022/01/03.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str = "", result = "";
    cin >> str;
    result += str[0];
    for(int i = 1; i < str.length(); i++)
    {
        if(str[i] == '-')
        {
            result += str[i+1];
        }
    }
    cout << result;
    return 0;
}
