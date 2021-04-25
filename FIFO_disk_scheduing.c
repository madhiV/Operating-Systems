#include<stdio.h>
void main()
{
    int n,t=0,st=0,diff;
    printf("Enter no of cylinder\n");
    scanf("%d",&n);
    int r[n+1];
    r[t]=56;
    t++;
    for(int i=1;i<n+1;i++){
        scanf("%d",&r[t]);
        t++;
    }
    for(int j=0;j<n;j++){
        diff=r[j]-r[j+1];
        if(diff<0){
            diff*=-1;
        }
        st+=diff;
    }
    printf("Total seek time:%d",st);
}
