#include<stdio.h>
#include<ctype.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int t1=0;t1<t;t1++){
        int ans;
        int n;
        scanf("%d",&n);
        int arr[n-1];
        int sum1=0;
        for(int i=0;i<n-1;i++){
            scanf("%d",&arr[i]);
            sum1+=arr[i];
        }
        ans=sum1*(-1);
        printf("%d\n",ans);
    }
    return 0;
}