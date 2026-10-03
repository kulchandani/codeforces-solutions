#include<stdio.h>
#include<math.h>

int main(){
    int dist;
    int ans=0;
    scanf("%d",&dist);
    if(dist<=5){
        ans=1;
    }
    else{
        while(dist>5){
            dist-=5;
            ans++;
        }
        ans++;
    }
    printf("%d",ans);
    return 0;
}