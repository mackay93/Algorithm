//
//  main.cpp
//  소음
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str1, str2, str3, result;
    int count1 = 0, count3 = 0, bigger_count, smaller_count, total_count;
    cin >> str1;
    cin >> str2;
    cin >> str3;
    for(int i = str1.size()-1; i>0; i--)
    {
        if(str1.at(i)=='0')
        {
            count1++;
        }
    }
    for(int i = str3.size()-1; i>0; i--)
    {
        if(str3.at(i)=='0')
        {
            count3++;
        }
    }
    total_count = count1+count3;
    if(str2 == "+")
    {
        result += "1";
        bigger_count = (count1 > count3)? count1:count3;
        smaller_count = (count1 < count3)? count1:count3;
        for(int i = 0; i < bigger_count; i++)
        {
            result += "0";
        }
        if(count1 == count3)
        {
            result.at(bigger_count -smaller_count) = '2';
        }
        else
        {
            result.at(bigger_count -smaller_count) = '1';
        }
        
    }
    else
    {
        result += "1";
        for(int i = 0; i<total_count; i++)
        {
            result += "0";
        }
    }
    cout << result;
    return 0;
}
