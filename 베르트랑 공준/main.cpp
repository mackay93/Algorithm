//
//  main.cpp
//  베르트랑 공준
//
//  Created by 안대수 on 2021/10/17.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[300000] = {};               //빈 배열 생성
    for(int i = 0; i <= 300000; i++)
    {
        arr[i] = i;                     //해당 인덱스와 일치하는 값 입력
    }
    for(int i = 2; i <=sqrt(300000); i++)
    {
        if(arr[i] == 0)                 // 값이 0 이면 패스
        {
            continue;
        }
        for(int j = i*i; j <= 300000; j+=i) //j는 i*i 부터 j에 i씩 더하면서 제거해 나간다.
        {
            arr[j] = 0;
        }
    }
    
    while(1)
    {
        int x = 1, y = 1, count = 0;
        cin >> x;
        y = 2 * x;
        if(x == 0)      //0이 입력이 되면 종료
        {
            break;
        }
        for(int i = x + 1; i <= y; i++)       //n초과, 2n이하의 소수 갯수를 출력한다.
        {
            if(i == 1)                          //1은 소수가 아니므로 제외
            {
                continue;
            }
            if(arr[i] != 0)                     //값이 0이 아닌 것만 출력
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
