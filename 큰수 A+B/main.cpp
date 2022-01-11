//
//  main.cpp
//  큰수 A+B
//
//  Created by 안대수 on 2021/07/04.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str1, str2, result;  //첫번째, 두번째 수를 받을 문자열 변수 2개와
                                //답을 넣을 정답 변수 1개
    int up = 0;                 //올림 변수
    
    cin >> str1 >> str2;        //첫번째와 두번째 수 입력받기
    auto str1_size = str1.size();   //첫번째 수의 사이즈
    auto str2_size = str2.size();   //두번째 수의 사이즈
    
    string temp;                // 두 수 중 사이즈가 작은것에 앞에 0을 넣어주기 위한 임시 변수
    if(str1_size > str2_size)   // 첫번째 수가 더 크면,
    {
        temp = str2;            // 두번째 수를 임시 변수에 넣고
        str2.clear();           // 두번째 수 클리어
        str2.append(str1_size - str2_size, '0'); //두번째 수에 (첫번째-두번째)수 만큼
                                                 //0을 넣는다
        str2.append(temp);                       //임시변수에 있던 기존 값을 다시 넣어준다.
    }
    else
    {
        temp = str1;
        str1.clear();
        str1.append(str2_size - str1_size, '0');
        str1.append(temp);
    }
    //이제 두 수의 사이즈가 같아졌다. 예) 12345 와 413경우 -> 12345와 00413이 되었다.
    for(int i = str1.length() - 1; i >= 0; i--)
    {
        int num = (str1[i] -'0') + (str2[i] - '0') + up;   //'0'을 빼주면서 숫자를 만든다.
        if(num > 9)
        {
            up = 1;
            num = num - 10;
            result.push_back(num + '0');
        }
        else
        {
            result.push_back(num + '0');
            up = 0;
        }
    }
    reverse(result.begin(), result.end());  //계산이 역순으로 되어있으니까 다시 뒤집어 원상복구
    if(up == 1)     //계산이 다 끝나고 나서도 올림이 1이면 올림을 출력하고 결과 출력
    {
        cout << 1 << result;
    }
    else            //계산이 다 끝나고 나서 올림이 0이면 그대로 결과 출력
    {
        cout << result;
    }
    return 0;
    
    
    
    
    
    
    
}
