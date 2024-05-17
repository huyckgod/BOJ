#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <string.h>

using namespace std;

int map[51][51];
int visit[51][51];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

vector<pair<int, int>> virus;
queue<pair<int, int>> Q;
int selected[10];
int selectedsize = 0;
int emptyspace = 0;

int N, M, empty, answer = 987654321;

void selec(int idx, int cnt)
{
    if(cnt == M)
    {
        int totaltime = 0;
        int infect = 0;
        
        for(int i = 0 ; i < M ; i++)
        {
            Q.push(virus[selected[i]]);
            visit[virus[selected[i]].first][virus[selected[i]].second] = 0;
        }
        
        while(!Q.empty())
        {
            int x = Q.front().second;
            int y = Q.front().first;
            
            Q.pop();
            
            for(int i = 0 ; i < 4 ;i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx>=0 && ny >= 0&& nx<N && ny <N)
                {
                    if(map[ny][nx] != 1 && visit[ny][nx] == -1)
                    {
                        visit[ny][nx] = visit[y][x]+1;
                        
                        if(map[ny][nx] == 0)
                        {
                            totaltime = visit[ny][nx];
                            infect++;
                        }
                        
                        
                        Q.push(make_pair(ny, nx));
                    }
                }
            }
        }
        
        if(totaltime < answer && infect == emptyspace)
            answer = totaltime;
        
        memset(visit, -1, sizeof(visit));
    }
    else
    {
        for(int i = idx ; i < int(virus.size()); i++)
        {
            selected[selectedsize] = i;
            selectedsize++;
            selec(i+1, cnt+1);
            selectedsize--;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;
    
    for(int i = 0 ; i< N; i++)
    {
        for(int j = 0 ; j < N; j++)
        {
            cin >> map[i][j];
            
            if(map[i][j] == 2)
                virus.push_back(make_pair(i, j));
            else if(map[i][j] == 0)
                emptyspace++;
        }
    }
    
    memset(visit, -1, sizeof(visit));
    selec(0,0);
    
    if(answer == 987654321)
        answer = -1;
    
    cout << answer;
    
    return 0;
}