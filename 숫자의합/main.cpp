//
//  main.cpp
//  숫자의합
//
//  Created by 안대수 on 2021/06/15.
//

#include <iostream>
using namespace std;

int getCount(int);

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num, result = 0;
    string str;
    cin>>num;
    cin>>str;
    if(num == str.size())
    {
        for(int i = 0; i < str.size(); i++)
        {
            result += str[i] - '0';
            //for 문에서 값을 더하고 있는데 그냥 더하면 char형이기 때문에 아스키코드 값이 더해집니다. 그러므로 '0'을 빼서 아스키코드 값이 실제 숫자 값에 대응할 수 있도록 하였습니다.
            //123이 입력되었다 가정하면
            //'1' - '0' = 49 - 48 = 1
            //'2' - '0' = 50 - 48 = 2
            //'3' - '0' = 51 - 48 = 3 이 되므로
            //sum에 입력된 각 자리 값을 더할 수 있습니다.
        }
    }
    cout<<result;
}
