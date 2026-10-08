#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    int t1;
    scanf("%d",&t1);
    for(int t=0;t<t1;t++){
        int n,x;
        scanf("%d %d",&n,&x);
        int refuel[n];
        for(int i=0;i<n;i++){
            scanf("%d",&refuel[i]);
        }
        int maxdist=refuel[0];
        for(int i=1;i<n;i++){
            int dist=abs(refuel[i]-refuel[i-1]);
            if(dist>maxdist){
                maxdist=dist;
            }
        }        
        int roundtrip=2*abs(refuel[n-1]-x);
        if(roundtrip>maxdist){
            maxdist=roundtrip;
        }
        printf("%d\n",maxdist);

    }
    return 0;
}


/* biggest diff between 2 stations
or diff from last station to dest to back to last station, whichever max */