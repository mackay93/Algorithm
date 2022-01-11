//
//  main.cpp
//  트럭 주차
//
//  Created by 안대수 on 2022/01/07.
//

#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A, B, C, cnt[101] = {0,}, result = 0;
    //cnt[101] =  수의 범위 1 ~ 100,
    //자동차들이 몇분에 얼마나 머물러 있었는지 기억하는 배열
    //결과를 담아 줄 result 변수 만들어 준다.
    cin >> A >> B >> C;
    for(int i = 0; i < 3; i++)
    {
        int from, to;
        cin >> from >> to;
        for(int j = from; j < to; j++)
        {
            cnt[j]++;   //from과 to를 받으면서 해당 분(minute)을 ++처리
        }
    }
    
    for(int k = 1; k < 100; k++)
    {
        if(cnt[k])  // 값이 있을때만 실행됨, 즉, 0 이상일때,
        {
            if(cnt[k] == 1) //cnt[k]의 값이 1이라는 뜻은 1
            {
                result += A;
            }
            else if(cnt[k] == 2)
            {
                result += B * 2;
            }
            else if(cnt[k] == 3)
            {
                result += C * 3;
            }
        }
    }
    cout << result;
    return 0;
}
