//
//  main.cpp
//  방학숙제
//
//  Created by 안대수 on 2021/10/06.
//

/*
문제
상근이는 초등학교에 다닐 때, 방학 숙제를 남들보다 먼저 미리 하고 남은 기간을 놀았다. 방학 숙제는 수학과 국어 문제 풀기이다.
방학은 총 L일이다. 수학은 총 B페이지, 국어는 총 A페이지를 풀어야 한다. 상근이는 하루에 국어를 최대 C페이지, 수학을 최대 D페이지 풀 수 있다.
상근이가 겨울 방학동안 숙제를 하지 않고 놀 수 있는 최대 날의 수를 구하는 프로그램을 작성하시오.

입력
한 줄에 하나씩 총 다섯 줄에 걸쳐 L, A, B, C, D가 주어진다. (2 ≤ L ≤ 40, 1 ≤ A, B ≤ 1000, 1 ≤ C, D ≤ 100)
항상 방학 숙제를 방학 기간내에 다 할 수 있는 경우만 입력으로 주어진다.
*/

#include <iostream>

using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int day, english_total, math_total, english_page, math_page, english_result =0, math_result = 0;
    cin >> day >> english_total >> math_total >> english_page >> math_page;
    if(english_total % english_page == 0)   //0으로 떨어지면 몫 그대로 출력
    {
        english_result = english_total/english_page;
    }
    else  // 0으로 떨어지지 않으면 몫+1일 (english_total % english_page != 0)
    {
        english_result = english_total/english_page + 1;
    }
    if(math_total % math_page == 0)
    {
        math_result = math_total/math_page;
    }
    else    //0으로 떨어지지 않으면 몫+1일 (math_total % math_page !=0 )
    {
        math_result = math_total/math_page + 1;
    }
    if(english_result > math_result)
    {
        cout<< day-english_result;
    }
    else
    {
        cout<< day-math_result;
    }
    return 0;
}
