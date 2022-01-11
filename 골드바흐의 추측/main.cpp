//
//  main.cpp
//  골드바흐의 추측
//
//  Created by 안대수 on 2021/10/18.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[10001];
    for(int i = 0; i < 10001; i++)
    {
        arr[i] = i;
    }
    for(int i = 2; i <=sqrt(10001); i++)
    {
        if(arr[i] == 0)                 // 값이 0 이면 패스
        {
            continue;
        }
        for(int j = i*i; j <= 10001; j+=i) //j는 i*i 부터 j에 i씩 더하면서 제거해 나간다.
        {
            arr[j] = 0;
        }
    }
    int x = 0;
    cin >> x;
    for (int i =0 ; i < x; i++)
    {
        int num = 0, half = 0, j = 0;
        cin >> num;
        half = num/2;
        while(1)
        {
            if((arr[half + j] != 0) && arr[num-arr[half+j]] != 0)  // 반으로 나눈 값이 소수일경우
            {
                cout << arr[num-arr[half+j]] << " " << arr[half + j] << endl;
                break;
            }
            else
            {
                j++;
            }
        }
    }
    return 0;
}
