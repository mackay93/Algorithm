//
//  main.cpp
//  달팽이는올라가고싶다
//
//  Created by 안대수 on 2021/07/01.
//
// 시간초과 난 코드
// 시간초과가 나지 않으려면 반복문 대신 수식을 이용해야하는 문제.
//#include <iostream>
//
//using namespace std;
//int main(void)
//{
//    int A,B,V, count = 0, total = 0;
//    cin >> A >> B >> V;
//    while(1)
//    {
//        if(total < V)
//        {
//            total += A;
//            count++;
//            if(total >= V)
//            {
//                cout << count;
//                break;
//            }
//            total-=B;
//        }
//    }
//}

/*
 문제
 
 땅 위에 달팽이가 있다. 이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.

 달팽이는 낮에 A미터 올라갈 수 있다. 하지만, 밤에 잠을 자는 동안 B미터 미끄러진다. 또, 정상에 올라간 후에는 미끄러지지 않는다.

 달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.
*/

#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A, B, V, day= 0, height = 0;    // A는 낮에 올라가는 거리, B = 밤에 올라가는 거리, V = 토탈
    cin >> A >> B >> V;
    height = V-B;           // 먼저 총 올라가야되는 거리를 구한다. 전체거리-밤에 올라가는 거리
    day = height / (A-B);   // 몇일을 올라가야 하는지는 (전체거리)/(낮 거리 - 밤 거리)로 구한다.
    if(height % (A-B) != 0)   // 만약 (전체거리)/(낮거리 - 밤거리)의 나머지가 0이 아니면 낮에 한번더 올라가야 하므로
    {
        day++;              // 1일을 추가한다.
    }
    cout << day;
}
