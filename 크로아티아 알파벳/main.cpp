//
//  main.cpp
//  크로아티아 알파벳
//
//  Created by 안대수 on 2021/06/24.
//


/*
 č    c=
 ć    c-
 dž    dz=
 đ    d-
 lj    lj
 nj    nj
 š    s=
 ž    z=
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int index = 0;
    string str;
    cin >> str;
    vector<string> vec = {"c=", "c-", "dz=","d-","lj","nj","s=","z="};
    //보기를 만들어 준다.
    for(int i = 0; i < vec.size();  i++)
    {
        //ljes=njak가 !e!!ak로 되는 과정
        while(1)
        {
            index = str.find(vec[i]);
            if(index == string::npos)
                break;
            str.replace(index, vec[i].length(), "!");   //해당문자가 있는곳의 인덱스부터 해당문자의 글자수만큼을 "!"로 치환한다.
                //lj는 인덱스 0이다.
                //vec[i].length()는 2이다
                // 즉, 0~2를 '!'로 치환하는것이다.
        }
        
        
    }
    cout << str.length();
    return 0;
}
