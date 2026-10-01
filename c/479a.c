#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int op[6];
    op[0]=a+(b*c);
    op[1]=(a+b)*c;
    op[2]=(a*b)+c;
    op[3]=a*(b+c);
    op[4]=a+b+c;
    op[5]=a*b*c;

    int max=op[0];
    for(int i=1;i<6;i++){
        if(op[i]>max){
            max=op[i];
        }
    }

    printf("%d",max);

    return 0;
}