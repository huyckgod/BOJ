#include<stdio.h>
#include<string.h>
int main()
{
int i;
char arr[1000];
scanf("%s",arr);
for(i=0;i<strlen(arr);i++)
{
arr[i]=arr[i]-3;
if(arr[i]<'A')
{
arr[i]=arr[i]+26;
}
}
printf("%s",arr);
}
