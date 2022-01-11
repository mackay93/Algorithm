//
//  main.cpp
//  단어 공부
//
//  Created by 안대수 on 2021/06/17.
//

#include <iostream>
#include <string.h>
#include <array>

using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[26] = {0,};   //배열을 전부 0으로 초기화한다.
    int max = 0, max_count = 0 , max_index = 0;
    
    string str;
    cin >> str;
    
    for(int i = 0; i < str.length(); i++)   //문자열 전체를 대문자로 바꿔주는 과정
    {
        if(str[i] - 97 >= 0)
        {
            str[i] = str[i] - 32;
        }
        else
        {
            continue;
        }
    }
    
    for(int j = 0; j < str.length(); j++)   //문자열 중 각 문자가 몇번씩 나왔는지
                                            //arr[index]를 늘리면서 호
    {
        arr[str[j]- 65]++;
    }
    
    max = arr[0];
    for(int k = 1; k < 26; k++)
    {
        if(arr[k] > max)
        {
            max = arr[k];
            max_count = 0;
            max_index = k;
        }
        else if(arr[k] == max)
        {
            max_count++;
        }
    }
    if(max_count > 0)
    {
        cout<<"?";
    }
    else
    {
        int result = max_index + 65;
        cout<<(char)result;
    }
}
