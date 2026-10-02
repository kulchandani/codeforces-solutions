#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str1[101];
    scanf("%100s",str1);
    int l1=strlen(str1);
    char str[l1];
    for(int i=0;i<l1;i++){
        str[i]=tolower(str1[i]);
    }
    int uniq=0;
    for(int j=0;j<l1;j++){
        int flag=0;
        for(int k=j+1;k<l1;k++){
            if(str[j]==str[k]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            uniq++;
        }
    }
    if(uniq%2==0){
        printf("CHAT WITH HER!");

    }
    else{
        printf("IGNORE HIM!");
    }

    return 0;
}