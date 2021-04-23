#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int c,n,pf=0,j=0,top=-1,flag;
    printf("No of pages : ");
    scanf("%d",&c);
    int a=c*2;
    char inp[a];
    int p[c];
    printf("Enter the pages : ");
    //storing pages in an array
    for(int i=0;i<c;i++){
            scanf("%d",&p[j]);
            j++;
    }
    printf("Enter the no. of frames : ");
    scanf("%d",&n);
    int f[n];
    for(int y=0;y<c;y++){
        if(top==-1){
            top++;
            pf++;
            f[top]=p[y];
            continue;
        }
        flag=0;
        for(int g=0;g<n;g++){
            if(p[y]==f[g]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            pf++;
            top=(top+1)%n;
            f[top]=p[y];
        }
    }
    float gy=c,ko=pf;
    printf("Page Fault : %d\nHit Rate : %d\nPFR: %f",pf,(c-pf),(ko/gy));
    printf("%s",inp);
}
