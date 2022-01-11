//어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
//등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
// N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int getCount(int);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int target_num;
    int count;
    cin >> target_num;      //먼저 타겟 넘버를 받는다.
    if(target_num < 100)    //타겟 넘버가 100 미만이면
    {
        count = target_num; //정답은 타겟넘버이다 왜냐하면 1부터 99까지는 모두 각 자리의 차이가 1.
    }
    else
    {
        count = getCount(target_num);   // 100 초과이면,
    }
    cout << count;  //카운트 출력.
    return 0;
}
int getCount(int target_num)
{
    int first, second, third;
    int result = 99;
    int temp;
    if(target_num >= 100 && target_num <= 1000)
    {
        for(int i = 100; i <= target_num; i++ )
        {
            temp = i;
            third = temp%10;
            temp = temp/10;
            second = temp%10;
            temp = temp/10;
            first = temp;
            if((third-second) == (second-first))
            {
                result++;
            }
        }
    }
    return result;
}
