#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char arr[106];
        scanf("%105s",arr);
        int first=-1;
        int last=-1;
        int cnt1=0;

        for(int i=0;i<n;i++){
            if(arr[i]=='1'){
                cnt1++;
                if(first==-1){
                    first=i;
                }
                last=i;
            }
        }

        if (cnt1 == 1) {
            printf("0\n");
        } else if (cnt1 == 2) {
            printf("1\n");
        } else {
            printf("%d\n", last - first);
        }
    }
    return 0;
}

