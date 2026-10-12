#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int t1;
    scanf("%d",&t1);
    for(int t=0;t<t1;t++){
        int n;
        scanf("%d",&n);
        if(n%3==0){
            printf("Second\n");
        }
        else{
            printf("First\n");
        }
        
    }
    return 0;
}