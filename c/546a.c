#include<stdio.h>
#include<math.h>

int main(){
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int totamt=0;
    for(int i=1;i<=w;i++){
        totamt+=k*i;
    }
    if(totamt<=n){
        printf("0");
    }
    else{
        printf("%d",totamt-n);
        
    }
    return 0;
}