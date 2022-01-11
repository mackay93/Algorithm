//
//  main.cpp
//  오븐 시계
//
//  Created by 안대수 on 2021/09/30.
//

#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int hour, min, cook_time, hour_total, min_total, hour_count;
    cin >> hour >> min >> cook_time;
    min_total = min + cook_time;
    if(min_total <= 59)
    {
        cout << hour <<" " << min_total;
    }
    else                //현재 분과 요리시간을 더한 값이 60이상일때
    {
        hour_count = min_total/60;
        min_total = min_total%60;
        hour_total = hour + hour_count;
        if(hour_total > 23)
        {
            hour_total = (hour_total) % 24;
            cout << hour_total << " " << min_total;
        }
        else
        {
            cout << hour_total << " " << min_total;
        }
    }
    return 0;
}
