#include<stdio.h>
#include<ctype.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("HARD");
    }
    else{
        printf("EASY");
    }
}