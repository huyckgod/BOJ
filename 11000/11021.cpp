#include <stdio.h>

int main()
{
    int a,i,b,c;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %d",&b,&c);
        printf("Case #%d: %d\n",i+1,b+c);
    }
}
