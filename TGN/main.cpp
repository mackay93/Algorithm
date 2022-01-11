//
//  main.cpp
//  TGN
//
//  Created by 안대수 on 2022/01/06.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int r,e,c;
        cin >> r >> e >> c;
        if(e-c > r)
        {
            cout << "advertise" << endl;
        }
        else if(e-c == r)
        {
            cout << "does not matter" << endl;
        }
        else
        {
            cout << "do not advertise" << endl;
        }
    }
    return 0;
}
