#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[101];
    scanf("%100s", s);
    int l = strlen(s);
    for (int i=0;i<l;i++){
        char c = tolower(s[i]);
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='y'){
            printf(".%c",c);
        }
    }
    return 0;
}