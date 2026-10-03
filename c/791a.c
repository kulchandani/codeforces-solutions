#include<stdio.h>
#include<math.h>

int main(){
    int limak,bob;
    scanf("%d %d",&limak,&bob);
    int cnt=0;
    while(bob>=limak){
        cnt++;
        limak=limak*3;
        bob=bob*2;
    }
    printf("%d",cnt);
    return 0;
}