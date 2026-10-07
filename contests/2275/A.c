#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int t1;
    scanf("%d",&t1);
    for(int t=0;t<t1;t++){
        int x0,y0,r;
        scanf("%d %d %d",&x0,&y0,&r);
        int y=y0;
        int x=x0+r;
        printf("%d %d\n",x,y);
    }
    return 0;
}