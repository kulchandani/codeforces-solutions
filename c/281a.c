#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[1001];
    scanf("%1000s",str);
    str[0]=toupper(str[0]);
    printf("%s",str);
    return 0;
}