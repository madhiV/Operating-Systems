#include<stdio.h>
void main()
{
    int n,t,e;
    printf("Enter the number of processes : ");
    scanf("%d",&n);
    int bt[n],tt[n],at[n],bt2[n],tbt=0;
    float ans,tsum=0,wsum=0;
    printf("Enter the arrival times of processes: ");
    for(int i=0;i<n;i++){
        scanf("%d",&at[i]);
    }
    printf("Enter the burst times of processes: ");
    for(int i=0;i<n;i++){
        scanf("%d",&bt[i]);
        bt2[i]=bt[i];
        tbt+=bt[i];
    }
    for(int i=0;i<tbt;i++){
        t=999;
        for(int j=0;j<n;j++){
            if(at[j]<=i && bt2[j]>0){
                if(t>bt2[j]){
                    t=bt2[j];
                    e=j;
                }
            }
        }
        bt2[e]-=1;
        tt[e]=i+1;
    }
    printf("Process\tBurst time\tWaiting time\tTurnaround time\n");
    for(int i=0;i<n;i++){
        printf("P%d\t",i+1);
        printf("%d\t",bt[i]);
        printf("%d\t",(tt[i]-bt[i]));
        printf("%d\n",tt[i]);
        tsum+=tt[i];
        wsum+=(tt[i]-bt[i]);
    }
    ans=wsum/n;
    printf("Average waiting time : %f\n",(ans));
    ans=tsum/n;
    printf("Average turnaround time : %f",(tsum/n));
}
