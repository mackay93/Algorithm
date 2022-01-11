//
//  main.cpp
//  test11
//
//  Created by 안대수 on 2021/12/08.
//
// 이 프로그램은 출력하기 위한 프로그램 입니다.
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "123";
    cout << (int)s[0] << endl;
    s[0]++;
    cout << (int)s[0] << endl;
    cout << s << "\n"; // 223
    
    string str_arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> str_arr[i];
    }
    sort(str_arr, str_arr + 5, true);
    for(int i = 0; i < 5; i++)
    {
        cout << str_arr[i];
    }
    return 0;
}


