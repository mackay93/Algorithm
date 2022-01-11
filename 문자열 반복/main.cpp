//
//  main.cpp
//  문자열 반복
//
//  Created by 안대수 on 2021/06/16.
//

/*
 숫자와 문자열이 주어지면 숫자만큼 문자열의 각 문자를 숫자만큼 출력하면 되는 프로그램이다.
*/

#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num;
    cin>>num;
    if(num >= 1 && num <= 1000)
    {
        for(int i = 0; i < num; i++)
        {
            int iter;
            cin >> iter;
            if(iter >= 1 && iter <= 8)
            {
                string str;
                cin >> str;
                if(str.length() >=1 && str.length() <=20)
                {
                    for(int j = 0; j < str.length(); j++)
                    {
                        for(int k = 0; k < iter; k++)
                        {
                            cout<<str[j];
                        }
                    }
                }
            }
            cout << "\n";
        }
    }
}
