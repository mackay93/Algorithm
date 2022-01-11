//
//  main.cpp
//  인공지능 시계
//
//  Created by 안대수 on 2021/10/25.
//


/*
 입력
 첫째 줄에는 현재 시각이 나온다.
 현재 시각은 시 A (0 ≤ A ≤ 23), 분 B (0 ≤ B ≤ 59)와 초 C (0 ≤ C ≤ 59)가 정수로 빈칸을 사이에 두고 순서대로 주어진다.
 두 번째 줄에는 요리하는 데 필요한 시간 D (0 ≤ D ≤ 500,000)가 초 단위로 주어진다.

 출력
 첫째 줄에 종료되는 시각의 시, 분, 초을 공백을 사이에 두고 출력한다.
 (단, 시는 0부터 23까지의 정수이며, 분, 초는 0부터 59까지의 정수이다.
 디지털 시계는 23시 59분 59초에서 1초가 지나면 0시 0분 0초가 된다.)
 */
#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int hour = 0, minute = 0, second = 0, add_timer = 0, hour_counter = 0, minute_counter = 0, second_counter = 0;
    cin >> hour >> minute >> second >> add_timer;
    while(add_timer > 0)
    {
        if(add_timer >= 3600)
        {
            hour_counter++;
            add_timer -= 3600;
        }
        else if(add_timer >= 60)
        {
            minute_counter++;
            add_timer -= 60;
        }
        else
        {
            second_counter++;
            add_timer -= 1;
        }
    }
    
    hour += hour_counter;
    minute += minute_counter;
    second += second_counter;
    
    int up_minute = 0, up_hour = 0;
    if(second >= 60)
    {
        up_minute = second/60;
        second = second % 60;
        minute = minute + up_minute;
    }
    if(minute >= 60)
    {
        up_hour = minute/60;
        minute = minute % 60;
        hour = hour + up_hour;
    }
    hour = hour % 24;
    cout << hour << " " << minute << " " << second;
    
    
    
    
    return 0;
}
