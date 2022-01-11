//
//  main.cpp
//  최소공배수
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>

using namespace std;

int getLCM(int a, int b)
{
    int i =1, bigger, smaller,result;
    bigger = (a>b)? a:b;
    smaller = (a<b)? a:b;
    while(true)
    {
        if((bigger*i)%smaller ==0)
        {
            break;
        }
        i++;
    }
    result = bigger * i;
    return result;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    for(int i =0; i<num; i++)
    {
        int a,b, result=0;
        cin >> a >> b;
        result = getLCM(a,b);
        cout << result << endl;
    }
    return 0;
}
