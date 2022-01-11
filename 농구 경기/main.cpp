//
//  main.cpp
//  농구 경기
//
//  Created by 안대수 on 2022/01/09.
//

#include <iostream>
using namespace std;
char letter[26];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num;
    string ret;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        string str;
        cin >> str;
        letter[str[0]-'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(letter[i] > 4)
        {
            ret += char(i+97);
        }
    }
    if(ret.size())
    {
        cout << ret;
    }
    else
    {
        cout << "PREDAJA";
    }
    return 0;
}
