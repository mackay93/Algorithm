//
//  main.cpp
//  단어의 갯수
//
//  Created by 안대수 on 2021/06/20.
//
#include <iostream>
#include <string.h>
#include <array>
#include <vector>
#include <cctype>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int result = 0;
    string str;
    getline(cin, str);          //공백을 포함한 문자열을 받을때 getline을 이용한다.
    if(str.length() == 0)       //만약 길이가 0이면
    {
        cout << "0";            //0을 출력
        return 0;               // 종료
    }
    result = 1;                 //0이 아니라는것은 적어도 1개는 있다는 뜻.
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')   //str 전체를 돌면서 공백이 있으면
        {
            result++;       //result에 1 추가
        }
    }
    if(str[0] == ' ')       //만약 str 처음이 공백이면
    {
        result--;           //result에서 1 감소
    }
    if(str[str.length()-1] == ' ')  //만약 str의 마지막이 공백이면
    {
        result--;                   // result에서 1 감소
    }
    cout << result;
    return 0;
}

