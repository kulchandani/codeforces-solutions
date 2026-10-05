#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[101];
    scanf("%100s",str);
    int len=strlen(str);
    int flag=1; //no change
    // two cases of deliberate- sBs, Bs
    if(str[0]>='a'&&str[0]<='z'){
        flag=0; //mistake, change to Bs
        for(int i=1;i<len;i++){
            if(str[i]>='a'&&str[i]<='z'){
                flag=1; //deliberate
            }
        }
    }
    else if (str[0]>='A'&&str[0]<='Z'){
        flag=2; //mistake, change to ss
        for(int i=1;i<len;i++){
            if(str[i]>='a'&&str[i]<='z'){
                flag=1; //deliberate
            }
        }
    }
    // remaining- sB, B

    if(flag==0){
        str[0]=toupper(str[0]);
        for(int i=1;i<len;i++){
            str[i]=tolower(str[i]);
        }
    }
    if(flag==2){
        for(int i=0;i<len;i++){
            str[i]=tolower(str[i]);
        }
    }

    printf("%s",str);

    return 0;
}