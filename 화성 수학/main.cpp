//
//  main.cpp
//  화성 수학
//
//  Created by 안대수 on 2021/10/11.
//

#include <iostream>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    
    string count;
    getline(cin, count);
    int num = stoi(count);
    
    double DBL;
    string str;
    
    while(num--)
    {
        cin >> DBL;
        getline(cin, str);
        for(int i = 0; i < str.size(); i++)
        {
            switch (str[i])
            {
            case '@':
                DBL *= 3;
                break;
            case '#':
                DBL -= 7;
                break;
            case '%':
                DBL += 5;
                break;
            }
        }
        printf("%.2f\n", DBL);
    }
    return 0;
}
