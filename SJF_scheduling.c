#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of process : ");
    scanf("%d",&n);
    printf("Enter burst time:\n");
    double wsum=0,tsum=0;
    int bt[n],wt[n],tt[n];
    for(int i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    wsum=wt[0];
    for(int j=1;j<n;j++){
        wt[j]=bt[j-1]+wt[j-1];
        wsum+=wt[j];
    }
    tt[0]=bt[0];
    tsum=tt[0];
    for(int z=1;z<n;z++){
        tt[z]=tt[z-1]+bt[z];
        tsum+=tt[z];
    }
    printf("process      BurstTime        WaitTime              TurnAroudTime\n");
    printf("------------------------------------------------------------------------\n");
    for(int h=0;h<n;h++){
        printf("p%d         %d         %d         %d\n",h,bt[h],wt[h],tt[h]);
    }
    printf("Average Waiting Time : %f ms\n",wsum/n);
    printf("Average Turn Around Time : %f ms",tsum/n);
}
