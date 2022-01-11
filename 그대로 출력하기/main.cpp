//
//  main.cpp
//  그대로 출력하기
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>

using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    while(true)
    {
        getline(cin,str);
        if(str == "")
        {
            break;
        }
        else
        {
            cout << str <<endl;
        }
    }
    return 0;
}
