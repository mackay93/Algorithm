//
//  main.cpp
//  설탕배달
//
//  Created by 안대수 on 2021/07/03.
//

/* 상근이는 요즘 설탕공장에서 설탕을 배달하고 있다. 상근이는 지금 사탕가게에 설탕을 정확하게 N킬로그램을 배달해야 한다. 설탕공장에서 만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.
 
 상근이는 귀찮기 때문에, 최대한 적은 봉지를 들고 가려고 한다. 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.

 상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.
 */

/* 다른 사람 풀이.. 이해하기 훨씬 쉽다.
 #include <iostream>

 using namespace std;

 int N;
 int main() {
     cin >> N;
     int ans = 0;
     while (N>=0) {
         if (N % 5 == 0) {    //가장 큰 수로 나누는게 가장 작은수랑 섞어서 나누는 것보다 유리
             ans += (N / 5);    //나눈 몫을 더한 것이 정답
             cout << ans << endl;
             return 0;
         }
         N -= 3;    //3kg을 빼고
         ans++;    //가방 하나 늘어남
     }
     cout << -1 << endl;
 }
 */

#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N; //설탕의 총 무게
    if(N >= 3 && N<= 5000)
    {
        if((N%5)==0)
        {
            cout << N/5;
            return 0;
        }
        else    //5로 나눴을떄 나머지가 있으면,
        {
            int count_5 = N/5;  //먼저 설탕을 5로 나눠준 값을 count_5에 저장한다.
            for(int i = count_5; i >0; i--) // count5부터 하나씩 줄여나가면서..
            {
                if((N-(i*5))%3==0)      //(전체무게 - (count_5 * 5)) % 3의 나머지가 0이면,
                {
                    cout << ((N-(i*5))/3) + i;  // (전체무게 - (count_5 * 5))/3 + count_5값 이 답.
                    return 0;
                }
            }
        }
    }
    if(N%3==0)
    {
        cout << N/3;
        return 0;
    }
    else
    {
        cout<< -1;
        return 0;
    }
    
    
}
