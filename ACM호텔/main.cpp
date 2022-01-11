//
//  main.cpp
//  ACM호텔
//
//  Created by 안대수 on 2021/07/03.
//

#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int number;
    cin >> number;                  //테스트 케이스
    for(int i = 0; i < number; i++)
    {
        int H,W,N, floor, room_num; //Height(높이), Width(너비), Number(손님)
        cin >> H >> W >> N;     //높이와 너비 몇번째 손님인지 입력받기.
        floor = N % H;          //층수는 손님 % 높이
        room_num = N / H;       //호수는 손님 / 높이
        if(floor == 0)          //손님이 꼭대기에 머물경우 (나머지가 없는경우)
        {
            cout << H * 100 + room_num << "\n";
        }
        else                    //손님이 꼭대기에 머물지 않는 경우 (나머지가 있는경우)
        {
            cout << floor * 100 + (room_num + 1) << "\n";
        }
    }
}
