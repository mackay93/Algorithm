//
//  main.cpp
//  소수찾기
//
//  Created by 안대수 on 2021/08/28
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPrime(int n);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int min = 0, from = 0, to = 0 ,count = 0, sum = 0;
    cin >> from >> to;
    
    for(int i = from; i <=to; i++)
    {
        bool ret = false;
        ret = isPrime(i);
        if(ret == 1)
        {
            if(count==0)
            {
                min = i;
            }
            sum += i;
            count++;
        }
    }
    
    if(count==0)
    {
        cout << -1;
    }
    else
    {
        cout << sum<<"\n";
        cout << min;
    }
    return 0;
}

bool isPrime(int n)
{
    bool ret = true;
    if(n<2)
    {
        ret = false;
    }
    for(int i = 2; i < n-1; i++)
    {
        if(n%i == 0)
        {
            ret =false;
        }
    }
    return ret;
}
