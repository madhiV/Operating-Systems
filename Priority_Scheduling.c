#include<stdio.h>
 
int main()
{
    int n,temp;
    printf("Enter a no. of process : ");
    scanf("%d",&n);
    int bt[n],wt[n],tt[n],p[n];
    printf("Enter burst time : ");
    int tat=0;
    for(int i=0;i<n;i++){
        scanf("%d",&bt[i]);
        tat+=bt[i];
    }
    printf("Enter priority : ");
    for(int j=0;j<n;j++){
        scanf("%d",&p[j]);
    }
    
    for(int k=0;k<n;k++){
        temp=0;
        for(int z=0;z<n;z++){
            if(z==k){
                continue;
            }
            if(p[z]<p[k]){
                temp+=bt[z];
            }
        }
        wt[k]=temp;
    }
    for(int l=0;l<n;l++){
        tt[l]=bt[l]+wt[l];
    }
    printf("process   BurstTime   WaitTime     TurAroundTime\n");
    for(int p=0;p<n;p++){
    printf("p%d       %d          %d            %d\n",p+1,bt[p],wt[p],tt[p]);
    }
}


