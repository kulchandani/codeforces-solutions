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
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        if(k>1){
            printf("YES\n");
        }
        else{
            bool sorted=true;
            for(int i=0;i<n-1;i++){
                if(arr[i+1]<arr[i]){
                    sorted=false;
                    break;
                }
            }
            if(sorted){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}