#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    int arr[100005];
    int i, j;
    
    cin >> N >> M;
    arr[0] = 0;
    
    for(int itr = 1 ; itr <= N; itr++)
    {
        scanf("%d", &arr[itr]);
        arr[itr] += arr[itr-1];
    }
    
    for(int itr = 0 ; itr < M; itr++)
    {
        scanf("%d %d",&i,&j);
        
        printf("%d\n",arr[j]-arr[i-1]);
    }

    return 0;
}