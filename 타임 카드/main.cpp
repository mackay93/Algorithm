//
//  main.cpp
//  타임 카드
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int bh, bm, bs , ah, am, as;
    for(int i = 0; i <3; i++)
    {
        cin >> bh >> bm >> bs >> ah >> am >> as;
        if(as-bs >= 0)           //후초 - 전초 > 0
        {
            if(am - bm >= 0)    //후분 - 전분 >= 0
            {
                cout << ah-bh << " " << am-bm << " " << as-bs;
            }
            else                //후분 - 전분 < 0
            {
                cout << ah-bh-1 << " " << 60 + (am-bm) << " " << as-bs;
            }
        }
        else
        {
            am = am-1;          //후초가 작으니 분-1;
            if(am - bm >= 0)    // 후분 - 전분 >=0
            {
                cout << ah-bh << " " << am-bm << " " << 60 + (as-bs);
            }
            else                // 후분 - 전분 < 0
            {
                cout << ah-bh-1 << " " << 60 + (am-bm) << " " << 60 + (as-bs);
            }
        }
        cout << "\n";
    }
    return 0;
}
