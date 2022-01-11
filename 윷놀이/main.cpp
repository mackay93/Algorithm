//
//  main.cpp
//  윷놀이
//
//  Created by 안대수 on 2021/10/20.
//

#include <iostream>
using namespace std;

int arr[5];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int j = 0; j < 3; j++)
    {
        int count = 0;
        for(int i = 0; i < 4; i++)
        {
            int x = 0;
            cin >> x;
            if(x==1)
            {
                count++;
            }
        }
        if(count == 0)
        {
            cout << "D" << "\n";
        }
        else if(count == 1)
        {
            cout << "C" << "\n";
        }
        else if(count == 2)
        {
            cout << "B" << "\n";
        }
        else if(count == 3)
        {
            cout << "A" << "\n";
        }
        else if(count == 4)
        {
            cout << "E" << "\n";
        }
    }
    
    return 0;
}
