//
//  main.cpp
//  TV 크기
//
//  Created by 안대수 on 2021/11/01.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int D, H, W;
    double result;
    cin >> D >> H >> W;     //대각선길이, 세로비율, 가로비율
    //피타고라스의 정리 (C^2 = A^2 + b^2)
    //우리는 여기서 비율만 알뿐 실제 값을 모른다.
    result = sqrt(pow(H,2) + pow(W,2));
    //H^2 + W^2을 구했다. 하지만 실제값이 아니라 비율만 구한것이므로 D로 나누어준다.
    result = D/result;
    //이제 result에는 x값이 들어있다 이제 실제 값을 구해서 요구에따라 정수로 출력하면 된다.
    cout << (int)(result * H) << " " << (int)(result * W);
    return 0;
}
