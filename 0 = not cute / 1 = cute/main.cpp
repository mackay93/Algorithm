//
//  main.cpp
//  0 = not cute / 1 = cute
//
//  Created by 안대수 on 2021/12/12.
//

#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    int cute = 0, n_cute = 0;
    for(int i  = 0; i < num; i++)
    {
        int x = 0;
        cin >> x;
        if(x == 1)
        {
            cute++;
        }
        else
        {
            n_cute++;
        }
    }
    if(cute > n_cute)
    {
        cout << "Junhee is cute!";
    }
    else
    {
        cout << "Junhee is not cute!";
    }
    return 0;
}
