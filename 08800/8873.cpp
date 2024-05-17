#include <iostream>
#include <queue>
#include <vector>
#define MAX_SIZE 500

using namespace std;

queue<pair<int, int>> q;

// 우,하,좌,상
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0 , -1 };

int H, W, result = 0;
int error_margin = 200;
int R[MAX_SIZE][MAX_SIZE];
int G[MAX_SIZE][MAX_SIZE];
int B[MAX_SIZE][MAX_SIZE];
bool is_visited[MAX_SIZE][MAX_SIZE] = {0,};

bool IsInside(int ny, int nx) {
	return (0 <= nx && 0 <= ny && nx < W && ny < H);
}
int minus_of_pixel(int x, int y, int x1, int y1){
	int sum = abs(R[y][x] - R[y1][x1]);
	sum += abs(G[y][x] - G[y1][x1]);
	sum += abs(B[y][x] - B[y1][x1]);
	return sum;
}
void bfs(void) {
	while(!q.empty()) {
		int y = q.front().second;
		int x = q.front().first;
		q.pop();

		for(int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if(IsInside(ny, nx) == 1 &&!is_visited[ny][nx]) {
				is_visited[ny][nx] = 1;
                result += minus_of_pixel(x,y,nx,ny);
				q.push({ nx, ny });
			}
		}
	}
}




int main()
{
	cin >> H >>  W;

	for (int i =0;i<H;i++)
	{
		for (int j = 0 ; j <W;j++)
		{
			cin >> R[i][j];
		}
	}

	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			cin >> G[i][j];
		}
	}


	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			cin >> B[i][j];
		}
	}
	is_visited[0][0] = 1;
	q.push({ 0,0 });
	bfs();
	result = result/(H*W);
	if(result < 10) cout << 4;
    else if(result < 25)cout << 1;
    else if(result < 50) cout << 2;
    else cout << 3;
}