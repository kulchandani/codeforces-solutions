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
        bool impossible=false;
        if(b>a+1){
            impossible=true;
        }
        else if((a-b)%2==0){
            printf("%d\n",a);
        }
        else{
            printf("%d\n",a+1);
        }


        if(impossible){
            printf("-1\n");
        }
        

        
    }
    return 0;
}



/* max moves a+1 as a is max dist on right
if b is above a+1 then impossible
below can zig zag as many times
if a b parity same then a moves, else 0.5 more (a+1)
*/