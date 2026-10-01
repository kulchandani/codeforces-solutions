#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int x1=0,y1=0,z1=0;
    for (int i=0;i<n;i++){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        x1+=x;
        y1+=y;
        z1+=z;
    }
    if(x1==0&&y1==0&&z1==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}