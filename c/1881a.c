#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

int main(){
    int t1;
    scanf("%d",&t1);
    for(int t=0;t<t1;t++){
        int n,m;
        scanf("%d %d",&n,&m);
        char x[1001];
        char s[26];
        scanf("%1000s",x);
        scanf("%25s",s);
        int cnt=-1;
        

        for(int i=0;i<=5;i++){
            if(strstr(x,s)!=NULL){
                cnt=i;
                break;
            }
            int curr_len=strlen(x);
             if (curr_len * 2 >= 1000) {
                break;
            }
            memcpy(&x[curr_len],x,curr_len);
            x[curr_len * 2] = '\0';
        }
        printf("%d\n",cnt);

    }
    return 0;
}

/*
biggest case- n=1,m=25; 1 2 4 8 16 32 -> 5 times
25 50 100 200 400 800
*/