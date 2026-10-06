#include<stdio.h>
#include<ctype.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int t=0;t<n;t++){
        int pts=0;
        char pt1[11],pt10[11];
        char pt2[11],pt9[11];
        char pt3[11],pt8[11];
        char pt4[11],pt7[11];
        char pt5[11],pt6[11];
        
        scanf("%10s",pt1); scanf("%10s",pt2); scanf("%10s",pt3);
        scanf("%10s",pt4); scanf("%10s",pt5); scanf("%10s",pt6);
        scanf("%10s",pt7); scanf("%10s",pt8); scanf("%10s",pt9);
        scanf("%10s",pt10);

        //ring 1
        for(int i=0;i<10;i++){
            if(pt1[i]=='X') { pts+=1; }
            if(pt10[i]=='X') { pts+=1; }
        }
        for(int i=1; i<9; i++){
            if(i==1 && (pt2[0]=='X')) { pts+=1; } if(i==1 && (pt2[9]=='X')) { pts+=1; }
            if(i==2 && (pt3[0]=='X')) { pts+=1; } if(i==2 && (pt3[9]=='X')) { pts+=1; }
            if(i==3 && (pt4[0]=='X')) { pts+=1; } if(i==3 && (pt4[9]=='X')) { pts+=1; }
            if(i==4 && (pt5[0]=='X')) { pts+=1; } if(i==4 && (pt5[9]=='X')) { pts+=1; }
            if(i==5 && (pt6[0]=='X')) { pts+=1; } if(i==5 && (pt6[9]=='X')) { pts+=1; }
            if(i==6 && (pt7[0]=='X')) { pts+=1; } if(i==6 && (pt7[9]=='X')) { pts+=1; }
            if(i==7 && (pt8[0]=='X')) { pts+=1; } if(i==7 && (pt8[9]=='X')) { pts+=1; }
            if(i==8 && (pt9[0]=='X')) { pts+=1; } if(i==8 && (pt9[9]=='X')) { pts+=1; }
        }


        //ring 2
        for(int i=1;i<9;i++){
            if(pt2[i]=='X') { pts+=2; }
            if(pt9[i]=='X') { pts+=2; }
        }
        for(int i=2; i<8; i++){
            if(i==2 && (pt3[1]=='X')) { pts+=2; } if(i==2 && (pt3[8]=='X')) { pts+=2; }
            if(i==3 && (pt4[1]=='X')) { pts+=2; } if(i==3 && (pt4[8]=='X')) { pts+=2; }
            if(i==4 && (pt5[1]=='X')) { pts+=2; } if(i==4 && (pt5[8]=='X')) { pts+=2; }
            if(i==5 && (pt6[1]=='X')) { pts+=2; } if(i==5 && (pt6[8]=='X')) { pts+=2; }
            if(i==6 && (pt7[1]=='X')) { pts+=2; } if(i==6 && (pt7[8]=='X')) { pts+=2; }
            if(i==7 && (pt8[1]=='X')) { pts+=2; } if(i==7 && (pt8[8]=='X')) { pts+=2; }
        }


        //ring3
        for(int i=2;i<8;i++){
            if(pt3[i]=='X') { pts+=3; }
            if(pt8[i]=='X') { pts+=3; }
        }
        for(int i=3; i<7; i++){
            if(i==3 && (pt4[2]=='X')) { pts+=3; } if(i==3 && (pt4[7]=='X')) { pts+=3; }
            if(i==4 && (pt5[2]=='X')) { pts+=3; } if(i==4 && (pt5[7]=='X')) { pts+=3; }
            if(i==5 && (pt6[2]=='X')) { pts+=3; } if(i==5 && (pt6[7]=='X')) { pts+=3; }
            if(i==6 && (pt7[2]=='X')) { pts+=3; } if(i==6 && (pt7[7]=='X')) { pts+=3; }
        }

        
        
        //ring4
        for(int i=3;i<7;i++){
            if(pt4[i]=='X') { pts+=4; }
            if(pt7[i]=='X') { pts+=4; }
        }
        for(int i=4; i<6; i++){
            if(i==4 && (pt5[3]=='X')) { pts+=4; } if(i==4 && (pt5[6]=='X')) { pts+=4; }
            if(i==5 && (pt6[3]=='X')) { pts+=4; } if(i==5 && (pt6[6]=='X')) { pts+=4; }
        }

        //ring5
        for(int i=4;i<6;i++){
            if(pt5[i]=='X') { pts+=5; }
            if(pt6[i]=='X') { pts+=5; }
        }
        printf("%d\n",pts);

    }

    return 0;
}
