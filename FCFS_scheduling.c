#include<stdio.h>
void print(int* wt,int* tt,int n,int* bt){
    for(int i=0;i<n;i++){
        printf("\n");
        printf("p%d             ",i+1);
        printf("%d                   ",bt[i]);
        printf("%d                    ",wt[i]);
        printf("%d",tt[i]);
    }
    printf("\n");
}
void main()
{
    int n;
    printf("Enter a no. of process : ");
    scanf("%d",&n);
    int bt[n];
    int wt[n];
    int tt[n];
    printf("Enter the burst time of the processes : ");
    //input
    for(int z=0;z<n;z++){
        scanf("%d",&bt[z]);
    }
    //waiting time
    
    wt[0]=0;
    int WTsum=0;
    for(int i=1;i<n;i++){
        WTsum+=bt[i-1];
        wt[i]=WTsum;
    }
    
    //turn around time
    
    tt[0]=bt[0];
    int TTsum=0;
    for(int j=1;j<n;j++){
        tt[j]=bt[j]+tt[j-1];
    }
    
    printf("process      BurstTime        WaitTime              TurnAroudTime\n");
    printf("------------------------------------------------------------------------");
    print(wt,tt,n,bt);
    
}
