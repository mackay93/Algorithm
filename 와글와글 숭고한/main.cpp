//
//  main.cpp
//  와글와글 숭고한
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3];
    int lowest = 1000, index = -1, total = 0;
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        if(arr[i] < lowest)
        {
            lowest = arr[i];
            index = i;
        }
        total += arr[i];
    }
    if(total >= 100)
    {
        cout << "OK";
    }
    else
    {
        switch (index)
        {
            case 0:
                cout << "Soongsil";
                break;
            case 1:
                cout << "Korea";
                break;
            case 2:
                cout << "Hanyang";
                break;
            default:
                break;
        }
    }
    
    
    return 0;
}
