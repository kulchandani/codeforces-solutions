#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int t1;
    scanf("%d",&t1);
    for(int t=0;t<t1;t++){
        int n,k;
        scanf("%d %d",&n,&k);
        int arr[n];
        bool present=false;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]==k){
                present=true;
            }
        }
        if(present){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
    return 0;
}