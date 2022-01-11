//
//  main.cpp
//  미로 탐색
//
//  Created by 안대수 on 2021/11/21.
//

#include <iostream>
#include <queue>
using namespace std;
char map[101][101];
int visited[101][101];
int dx[4] = {1, -1, 0, 0};              //x가 움직이는 방향에 숫자를 넣어준다. (우,좌,상,하)
int dy[4] = {0, 0, 1, -1};              //y가 움직이는 방향에 숫자를 넣어준다. (좌,우,상,하)
int n,m; queue<pair<int, int> > q;      // 예제 1의 입력 N = 4; M = 6;
void bfs(int x,int y)
{
    q.push(make_pair(x, y));            // 수 x와 y를 한 묶음으로 해서 큐에 넣는다.
    visited[x][y] = 1;                  // visited[x][y]에 1을 넣어줌으로서 방문했음을 알려준다.
    while (!q.empty())                  // q가 다 비워질때까지,
    {
        x = q.front().first;            // x는 q의 맨앞 첫번째 수이다.
        y = q.front().second;           // y는 q의 맨앞 두번째 수이다.
        q.pop();                        // x와 y를 지정해주고 맨 앞자리를 삭제해준다.
        for (int i = 0; i < 4; i++)     // 0부터 3까지 4번 돌면서 (dx와 dy의 갯수만큼)
        {
            int nx = x + dx[i];         //nx(next x)에 x + dx[i]를 넣어준다.
            int ny = y + dy[i];         //nx(next y)에 y + dy[i]를 넣어준다.
            if (0 <= nx && nx < n && 0 <= ny && ny < m && visited[nx][ny] == 0 && map[nx][ny] == '1')
            {                           //visited[nx][ny]를 통해서 방문했었던 곳인지 파악한다.
                                        //그리고 map[nx][ny]를 통해서 다음갈곳이 유효한 곳인지 파악한다.
                q.push(make_pair(nx, ny));              // 다음 가는곳을 pair로 만들어서 q에 넣어준다.
                visited[nx][ny] = visited[x][y] + 1;    // 다음가는곳을 방금 방문했던곳의 숫자 + 1을 해서 가중치를 계산한다.
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }
    bfs(0,0);
    cout << visited[n - 1][m - 1];
}
