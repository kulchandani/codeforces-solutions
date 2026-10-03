#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[101];
    scanf("%100s",str);
    int upper=0;
    int lower=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper>lower){
        for(int i=0;i<len;i++){
            str[i]=toupper(str[i]);
        }
    }
    else{
        for(int i=0;i<len;i++){
            str[i]=tolower(str[i]);
        }
    }
    printf("%s",str);
    return 0;
}