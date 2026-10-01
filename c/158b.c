#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int c1=0,c2=0,c3=0,c4=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        int g;
        scanf("%d",&g);
        if(g==1){
            c1+=1;
        }
        else if(g==2){
            c2+=1;
        }
        else if(g==3){
            c3+=1;
        }
        else if(g==4){
            c4+=1;
        }
    }
    cnt+=c4;
    if(c3<=c1){
        cnt+=c3;
        c1-=c3;
    }
    else{
        cnt+=c1;
        c3-=c1;
        cnt+=c3;
        c1=0;
    }

    cnt+=c2/2;
    c2=c2%2;

    if(c2==1){
        cnt+=1;
        if(c1>=2){
            c1-=2;
        }
        else{
            c1=0;
        }
    }

    if(c1>0){
        cnt+=(c1+3)/4;
    }

    printf("%d",cnt);
    return 0;
}