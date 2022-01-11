//
//  main.cpp
//  열 개씩 끊어 출력하기
//
//  Created by 안대수 on 2021/12/12.
//

#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str = "";
    cin >> str;
    int count = 0;
    for(int i = 0; i < str.length(); i++)
    {
        cout << str[i];
        count++;
        if(i != 0 && count == 10)
        {
            cout << "\n";
            count = 0;
        }
    }
    return 0;
}
