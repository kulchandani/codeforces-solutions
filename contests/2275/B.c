#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int t1;
    scanf("%d",&t1);
    for(int t=0;t<t1;t++){
        int n;
        scanf("%d",&n);
        int memory[200005];
        char command[200005];
        int printed[200005];    // 0 no 1 yes
        scanf("%s",command);

        for(int i=1;i<=n;i++){
            printed[i]=0;
        }

        int top=0;  // pointing?

        for(int i=0;i<n;i++){
            int doc_id=i+1;
            if(command[i]=='1'){
                memory[top]=doc_id;
                top++;  // is now one ahead
            }
            else if(command[i]=='2'){
                if(top>0){
                    top--;  // was one ahead
                    int printed_doc=memory[top];
                    printed[printed_doc]=1;
                }
                else{
                    printed[doc_id]=1;
                }
            }
            else if(command[i]=='3'){
                printed[doc_id]=1;
            }
        }

        int cnt=0;
        for(int i=1;i<=n;i++){
            if(printed[i]==0){
                cnt++;
            }
        }
        printf("%d\n",cnt);

        int spaces=0;
        for(int i=1;i<=n;i++){
            if(printed[i]==0){
                if(spaces==0){
                    printf("%d",i);
                    spaces=1;
                }
                else{
                    printf(" ");
                    printf("%d",i);
                }
            }
        }

        printf("\n");
    }
    return 0;
}



/* n docs, n commands 
all n have to be printed no need to only select ones as '1'

default printed[i] as 0

if command=3, mark(prined[i]) as 1

if command=1, add to memory, move memory pointer up by one

if command=2, mem ptr --, make printed[ptr]=1

remaining in mem all unprinted

indexing: ALWAYS 1 TO N, FIX to i+1 in loop reading command vals
*/
