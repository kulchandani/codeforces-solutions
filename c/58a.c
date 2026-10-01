#include<stdio.h>
#include<string.h>

int main(){
    char arr[101];
    scanf("%100s",arr);
    int len = strlen(arr);
    int flag=0;
    for(int i=0;i<len;i++){
        if(arr[i]=='h'&&flag==0){
            flag=1;
        }
        else if(arr[i]=='e'&&flag==1){
            flag=2;
        }
        else if(arr[i]=='l'&&flag==2){
            flag=3;
        }
        else if(arr[i]=='l'&&flag==3){
            flag=4;
        }
        else if(arr[i]=='o'&&flag==4){
            flag=5;
        }
    }

    if(flag==5){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}