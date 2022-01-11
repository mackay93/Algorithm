//
//  main.cpp
//  알파벳 찾기
//
//  Created by 안대수 on 2021/06/15.
//

/*
 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
 */

#include <iostream>
#include <stdio.h>
#include <array>
#include <string.h>
using namespace std;

int main(void) {
    char str[101];
    array<int,26> arr; //벡터 선언.
    
    /*
     arr은 26개의 숫자를 담을 수 있는 정수 vector,
     str은 주어진 문자를 담을 수 있는 char 배열,
    */
    
    cin>>str;
    fill_n(arr,101,-1); // arr를 -1로 초기화
    
    for(int i = 0; i < strlen(str); i++)
    {
        if(arr[str[i]- 'a'] == -1)
        {
            arr[str[i]- 'a'] = i;
        }
    }
    /*
     예) baekjoon
     arr[str[i] - 'a'] = i;
     arr[1] = 0;
     arr[0] = 1;
     arr[4] = 2;
     ... 이런식으로 찾아 나아간다.
     */
    for(int i = 0; i < 26; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
