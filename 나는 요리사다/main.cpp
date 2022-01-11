//
//  main.cpp
//  나는 요리사다
//
//  Created by 안대수 on 2021/10/12.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5] = {0,};
    int index = -1, biggest = -1;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <4; j++)
        {
            int num = 0;
            cin >> num;
            arr[i] +=num;
        }
    }
    for(int i = 0 ; i < 5; i++)
    {
        if(arr[i] > biggest)
        {
            index = i +1;
            biggest = arr[i];
        }
    }
    cout << index << " " << biggest;
    return 0;
}
