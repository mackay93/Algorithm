//
//  main.cpp
//  Fridge of Your Dreams
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 0;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        long long sum = 0;
        string str = "", reverse_str = "";
        cin >> str;
        reverse(str.begin(), str.end());
        for(int j = 0; j < str.length(); j++)
        {
            if(str.at(j) == '1')
            {
                sum += pow(2,j);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
