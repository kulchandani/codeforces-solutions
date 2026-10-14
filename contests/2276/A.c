#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int t1;
    scanf("%d",&t1);
    for(int t=0;t<t1;t++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(b>=a){
            printf("-1\n");
        }
        else{
            int ans=-1;
            int diff=a-b;
            if(diff<b){
                ans=diff;
            }
            else{
                ans=b;
            }
            if(ans>=1){
                printf("%d\n",ans);
            }
            else{
                printf("-1\n");
            }
        }
        
    }
    return 0;
}