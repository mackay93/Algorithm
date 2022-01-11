//
//  main.cpp
//  피보나치 수
//
//  Created by 안대수 on 2021/10/11.
//  dp로 풀어야하는 문제

#include <iostream>
using namespace std;

//int fibonacci (int x)
//{
//    if(x == 0)
//    {
//        return 0;
//    }
//    else if(x == 1 || x == 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fibonacci(x-1) + fibonacci(x-2);
//    }
//}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    int arr[45];
    cin >> num;
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i<46; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[num];
//    cout << fibonacci(num);
    return 0;
}
