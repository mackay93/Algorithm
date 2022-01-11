//
//  main.cpp
//  히스토그램
//
//  Created by 안대수 on 2021/10/27.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    for(int i = 0;  i < num; i++)
    {
        int x;
        cin >> x;
        for(int j = 0; j < x; j++)
        {
            cout << "=";
        }
        cout << endl;
    }
    return 0;
}
