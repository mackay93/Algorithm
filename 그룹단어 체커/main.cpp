//
//  main.cpp
//  그룹단어 체커
//
//  Created by 안대수 on 2021/06/26.
//

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int arr[26];
    int i, N,count = 0;
    cin >> N;
    for(int k = 0; k < N; k++)
    {
        cin >> str;
        fill_n(arr, 26, 0);                     //배열을 0으로 초기화
        arr[str[0] - 'a'] = 1;
        for(i = 1; i < str.length(); i++)       //str 전체를 돌면서
        {
            if(str[i-1] != str[i])              //만약 전 문자가 후 문자와 다르면
            {
                int idx = str[i]-97;            //후 문자의 인덱스를 찾고
                if(arr[idx] == 0)               //후 문자의 인덱스가 앞에 나오지 않았던 문자이면
                    arr[idx]++;                 //후 문자의 인덱스를 추가한다.
                else                            //후 문자의 인덱스가 앞에 나왔던 문자이면,
                    break;                      //그 문장은 그룹단어가 아니므로 브레이크를 통해 나간다.
            }
        }
        if(i == str.length())                   //문장을 끝까지 돌았다면 그룹단어가 맞으므로
        {
            count++;                            //그룹단어 카운트를 올려준다.
        }
    }
    cout << count;
}


//    벡터 사용법
//    vector<bool> bool_array(26);
//    cout << bool_array.size();
//    bool_array.assign(26,false);
//    for(vector<bool>::iterator itr = bool_array.begin(); itr != bool_array.end(); ++itr)
//    {
//        cout<<*itr;
//    }
