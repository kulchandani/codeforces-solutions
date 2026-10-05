#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int t=0;t<n;t++){
        char op[4];
        scanf("%s",op);
        if(op[1]=='+'){
            ans++;
        }
        else{
            ans--;
        }
    }
    printf("%d",ans);
    return 0;
}