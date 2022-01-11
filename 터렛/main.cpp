//
//  main.cpp
//  터렛
//
//  Created by 안대수 on 2021/11/09.
//

#include <iostream>
#include <cmath>
#define NL "\n"
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int x1, y1, r1, x2, y2, r2, distance = 0, hap = 0, cha = 0;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        //원래 두 점 사이의 거리를 구하는 공식은 sqrt((x1-x2)^2 + (y1-y2)^2)
        //하지만 소수점 계산보다 반지름의 합과 차를 각각 한번씩 더 곱해주는 방식으로
        //접근했다.
        distance = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
        hap = (r1+r2) * (r1+r2);
        cha = (r1-r2) * (r1-r2);
        //r1-r2가 음수여도 음수 * 음수는 양수인 점을 이용
        if(distance == 0 && r1 == r2)
        {
            cout << -1 << NL;
        }
        else if((cha < distance) && (distance < hap))
        {
            cout << 2 << NL;
        }
        else if(hap == distance || cha == distance)
        {
            cout << 1 << NL;
        }
        else
        {
            cout << 0 << NL;
        }
    }
    return 0;
}
