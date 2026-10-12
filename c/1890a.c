#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int t1;
    scanf("%d",&t1);
    for(int t=0;t<t1;t++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        if(n==2){
            printf("YES\n");
            continue;
        }
        else{
            int a=arr[0];
            int acnt=0;
            int b;
            int bcnt=0;
            bool two=false;
            bool three=false;
            for(int i=0;i<n;i++){
                if(arr[i]==a){
                    acnt++;
                }
                else{
                    if(two==false){
                        if(arr[i]!=a){
                            b=arr[i];
                            two=true;
                        }
                    }
                    else if(arr[i]!=b){
                        three=true;
                        break;
                    }
                }
            }
            if(three==true){
                printf("NO\n");
            }
            else if(two==false){
                printf("YES\n");
            }
            else{
                for(int i=0;i<n;i++){
                    if(arr[i]==b){
                        bcnt++;
                    }
                } 

                if(acnt==bcnt||acnt==bcnt+1||acnt==bcnt-1){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }

            }
            
        }
        
    }
    return 0;
}


