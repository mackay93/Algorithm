//
//  main.cpp
//  킹, 퀸, 룩, 비숍, 나이트, 폰
//
//  Created by 안대수 on 2021/09/20.
//

#include <iostream>
#include <array>
using namespace std;
int main(void) {
    array<int,6> arr = {1,1,2,2,2,8};
    array<int,6> input;
    for(int i =0; i < arr.size(); i++)
    {
        cin >> input[i];
        input[i] = arr[i] - input[i];
    }
    for(int i =0; i < arr.size(); i++)
    {
        cout << input[i] <<" ";
    }
    return 0;
}
