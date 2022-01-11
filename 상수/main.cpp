//
//  main.cpp
//  상수
//
//  Created by 안대수 on 2021/06/21.
//

/* 상근이의 동생 상수는 수학을 정말 못한다. 상수는 숫자를 읽는데 문제가 있다. 이렇게 수학을 못하는 상수를 위해서 상근이는 수의 크기를 비교하는 문제를 내주었다. 상근이는 세 자리 수 두 개를 칠판에 써주었다. 그 다음에 크기가 큰 수를 말해보라고 했다.
 
 상수는 수를 다른 사람과 다르게 거꾸로 읽는다. 예를 들어, 734와 893을 칠판에 적었다면, 상수는 이 수를 437과 398로 읽는다. 따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.

 두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.
 */

#include <stdlib.h>
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

void reverse(string str, string str2);

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str1, str2;
    cin >> str1 >> str2;
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    if(stoi(str1) > stoi(str2))
    {
        cout<<str1;
    }
    else
    {
        cout<<str2;
    }
    return 0;
}

/*
 다른 사람의 풀이
 
 
 #include<iostream>
 #include<cmath>
 using namespace std;
  
 int main(void){
  
     int a;
     int b;
     cin >> a;
     cin >> b;
  
     int ra=0;
     int rb=0;
  
     //숫자가 거꾸로 들어감
     //원래 숫자의 1의 자리를 바뀔 숫자에 자리수에 맞게 곱해서 더해준다
     for(int i=0; i<3; i++){
         ra += (a%10) * pow(10, 2-i);
         rb += (b%10) * pow(10, 2-i);
  
         a /= 10;
         b /= 10;
     }
  
     cout << max(ra,rb) << endl;
  
     return 0;
 }
 */
