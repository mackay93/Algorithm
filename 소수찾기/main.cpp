//
//  main.cpp
//  소수찾기
//
//  Created by 안대수 on 2021/08/17.
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
    int num, count = 0;
    cin >> num;
    vector<int> vec(num,0);
    for(int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        vec[i] = x;
    }
    for(int i = 0; i < num; i++)
    {
        bool ret = false;
        ret = isPrime(vec[i]);
        if(ret == 1)
        {
            count++;
        }
    }
    cout<<count;
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
