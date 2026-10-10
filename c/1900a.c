#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

int main(){
    int t1;
    scanf("%d",&t1);
    for(int t=0;t<t1;t++){
        int n;
        scanf("%d",&n);
        char arr[101];
        scanf("%100s",arr);
        bool triple=false;
        for(int i=0;i<n-2;i++){
            if(arr[i]=='.'&&arr[i+1]=='.'&&arr[i+2]=='.'){
                triple=true;
                break;
            }
        }
        if(triple){
            printf("2\n");
        }
        else{
            int cnt=0;
            for(int i=0;i<n;i++){
                if(arr[i]=='.'){
                    cnt++;
                }
            }
            printf("%d\n",cnt);
        }

    }


    return 0;
}