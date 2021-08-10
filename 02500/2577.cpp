#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,d,i;
    int arr[10]={0};
    char s[100];
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=a*b*c;
    sprintf(s, "%d", d);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='0'){
            arr[0]++;
        }
        if(s[i]=='1'){
            arr[1]++;
        }
        if(s[i]=='2'){
            arr[2]++;
        }
        if(s[i]=='3'){
            arr[3]++;
        }
        if(s[i]=='4'){
            arr[4]++;
        }
        if(s[i]=='5'){
            arr[5]++;
        }
        if(s[i]=='6'){
            arr[6]++;
        }
        if(s[i]=='7'){
            arr[7]++;
        }
        if(s[i]=='8'){
            arr[8]++;
        }
        if(s[i]=='9'){
            arr[9]++;
        }
    }
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
}
