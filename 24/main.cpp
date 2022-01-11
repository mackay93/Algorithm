//
//  main.cpp
//  24
//
//  Created by 안대수 on 2021/10/13.
//
/*
 입력
 첫째 줄에는 현재 시간이, 둘째 줄에는 도현이가 임무를 시작한 시간이 주어진다. 임무를 시작한 시간과 현재 시간이 같은 경우는 주어지지 않는다.

 출력
 첫째 줄에 도현이가 임무를 수행하는데 남은 시간을 문제에서 주어지는 시간의 형태 (XX:XX:XX)에 맞춰 출력한다.
 */

#include <iostream>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str1, str2;
    cin >> str1 >> str2;
    int a, b, c, d, e, f;
    a = stoi(str1.substr(0,2));
    b = stoi(str1.substr(3,2));
    c = stoi(str1.substr(6,2));
    d = stoi(str2.substr(0,2));
    e = stoi(str2.substr(3,2));
    f = stoi(str2.substr(6,2));
    d-=a;e-=b;f-=c;
    if(f<0){
        f+=60;
        e--;
    }
    if(e<0){
        e+=60;
        d--;
    }
    if(d<0)
    {
        d+=24;
    }
    //printf("%02d:%02d:%02d", d, e, f);
    //cout으로 43번째 줄과 같이 출력하고자 할때.
    cout.width(2);
    cout.fill('0');
    cout << d << ":" ;
    cout.width(2);
    cout.fill('0');
    cout << e << ":" ;
    cout.width(2);
    cout.fill('0');
    cout << f;
    return 0;
}
