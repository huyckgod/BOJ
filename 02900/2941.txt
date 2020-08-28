#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,num=0;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='c'){
            num++;
            if(s[i+1]=='-'||s[i+1]=='='){
                i++;
            }
        }else if(s[i]=='d'){
            num++;
            if(s[i+1]=='-'){
                i++;
            }else if(s[i+1]=='z'&&s[i+2]=='='){
                i++;
                i++;
            }
        }else if(s[i]=='l'){
            num++;
            if(s[i+1]=='j'){
                i++;
            }
        }else if(s[i]=='n'){
            num++;
            if(s[i+1]=='j'){
                i++;
            }
        }else if(s[i]=='s'){
            num++;
            if(s[i+1]=='='){
                i++;
            }
        }else if(s[i]=='z'){
            num++;
            if(s[i+1]=='='){
                i++;
            }
        }else{
            num++;
        }
    }
    printf("%d",num);
}
