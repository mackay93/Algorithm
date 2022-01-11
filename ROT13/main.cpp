//
//  main.cpp
//  ROT13
//
//  Created by 안대수 on 2022/01/09.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    getline(cin,str);
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            str[i] = str[i];
        }
        else if(str[i] >= 48 && str[i] <= 57)
        {
            str[i] = str[i];
        }
        else if(str[i] >= 65 && str[i] <= 90)
        {
            if((str[i] + 13) > 90)
            {
                str[i] = str[i] - 13;
            }
            else
            {
                str[i] = str[i] + 13;
            }
        }
        else if(str[i] >= 97 && str[i] <= 122)
        {
            if((str[i] + 13) > 122)
            {
                str[i] = str[i] - 13;
            }
            else
            {
                str[i] = str[i] + 13;
            }
        }
        
    }
    cout << str;
    return 0;
}
