// Example program
#include <iostream>
#include <string>
void star(int a,int b,int n);
using namespace std;
int map[6562][6562] = {0};
int main()
{
    int n,i,j;
    cin >> n;
    star(n/2,n/2,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(map[i][j]==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
void star(int a,int b,int n){
    if(n==1){
        map[a][b]=1;
        return;
    }
    star(a-(2*(n/6))-1,b-(2*(n/6))-1,n/3);
    star(a,b-(2*(n/6))-1,n/3);
    star(a+(2*(n/6))+1,b-(2*(n/6))-1,n/3);
    star(a-(2*(n/6))-1,b,n/3);
    star(a,b+(2*(n/6))+1,n/3);
    star(a+(2*(n/6))+1,b,n/3);
    star(a-(2*(n/6))-1,b+(2*(n/6))+1,n/3);
    star(a+(2*(n/6))+1,b+(2*(n/6))+1,n/3);
}