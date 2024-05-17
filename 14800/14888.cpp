#include <iostream>
#include <algorithm>

using namespace std;

int Min = 100000000000;
int Max = -100000000000;

int arr[11];
int opr[4];
int N;


void solve(int answer, int cnt)
{
    if(cnt==N)
    {
        if(answer < Min)
            Min = answer;
            
        if(answer > Max)
            Max = answer;
    }
    
    if(opr[0] > 0)
    {
        opr[0]--;
        solve(answer + arr[cnt], cnt+1);
        opr[0]++;
    }
    
    if(opr[1] > 0)
    {
        opr[1]--;
        solve(answer - arr[cnt], cnt+1);
        opr[1]++;
    }
    
    if(opr[2] > 0)
    {
        opr[2]--;
        solve(answer * arr[cnt], cnt+1);
        opr[2]++;
    }
    
    if(opr[3] > 0)
    {
        opr[3]--;
        solve(answer / arr[cnt], cnt+1);
        opr[3]++;
    }
    
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;
	
	for(int i = 0 ; i < N;i++)
	{
	    cin >> arr[i];
	}
	for(int i = 0 ; i < 4;i++)
	{
	    cin >> opr[i];
	}
	
	solve(arr[0], 1);
	
	
	cout << Max << "\n" << Min;
	
	
	
	return 0;
}