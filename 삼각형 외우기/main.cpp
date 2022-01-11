//
//  main.cpp
//  삼각형 외우기
//
//  Created by 안대수 on 2021/10/08.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    string str;
    if(a==60 && b==60 && c== 60)
    {
        str = "Equilateral";
    }
    else if(((a+b+c) == 180) && ((a==b) || (b==c) || (a==c)))
    {
        str = "Isosceles";
    }
    else if(((a+b+c) == 180) && ((a!=b) && (b!=c) && (a!=c)))
    {
        str = "Scalene";
    }
    else if((a+b+c) != 180)
    {
        str = "Error";
    }
    cout << str;
    return 0;
}
