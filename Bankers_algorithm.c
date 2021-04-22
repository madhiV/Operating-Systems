#include<stdio.h>
void main()
{
    char r[3]={'A','B','C'};
    int n,t=3,count=0,flag=0,k=0,y,counter=0,ya,m;
    int temp[3];
    int avail[1][3],bing[1][3];
    for(int b=0;b<3;b++){
        printf("Enter number of instances of resource %c : ",r[b]);
        scanf("%d",&avail[0][b]);
        temp[b]=0;
    }
    printf("Enter the number of processes : ");
    scanf("%d",&n);
    int ans[n],f[n];
    int all[n][3],max[n][3],need[n][3],pos[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
                printf("Enter allocation for p%d for resource %c: ",i,r[j]);
                scanf("%d",&all[i][j]);
                if(j==0){
                    avail[0][j]=avail[0][j]-all[i][j];
                }
                if(j==1){
                    avail[0][j]=avail[0][j]-all[i][j];
                }
                if(j==2){
                    avail[0][j]=avail[0][j]-all[i][j];
                }
                printf("Enter maximum for p%d for resource %c: ",i,r[j]);
                scanf("%d",&max[i][j]);
                need[i][j]=max[i][j]-all[i][j];
        }
        pos[i]=0;
        f[i]=0;
    }
    
    //Printing matrix...
    printf("Allocation");
    printf("\n");
    for(int m=0;m<n;m++){
        printf("p%d\t",m);
        for(int l=0;l<t;l++){
            printf("%d\t",all[m][l]);
        }
            printf("\n");
    }
    printf("\n");
    //max
    printf("Max");
    printf("\n");
    for(int z=0;z<n;z++){
        printf("p%d\t",z);
        for(int x=0;x<t;x++){
            printf("%d\t",max[z][x]);
        }
            printf("\n");
    }
    printf("\n");
    //available
    printf("Available\t");
        for(int v=0;v<t;v++){
            printf("%d\t",avail[0][v]);
    }
    //need
    printf("\nNeed");
    printf("\n");
    for(int a=0;a<n;a++){
        printf("p%d\t",a);
        for(int d=0;d<t;d++){
            printf("%d\t",need[a][d]);
        }
            printf("\n");
    }
    m=0;
    for(int q=0;q<n;q++){//iterating cases
        for(int l=0;l<n;l++){//iterating processes
        if(f[l]==0){
        ya=1;
            for(int r=0;r<3;r++){//iterating resources
                if(need[l][r]<=avail[0][r]){
                    continue;
                }
                ya=0;
            }
            if(ya==1){
                ans[m]=l;
                m++;
                avail[0][0]+=need[l][0];
                avail[0][1]+=need[l][1];
                avail[0][2]+=need[l][2];
                f[l]=1;
                }
            }
        }
    }
    if(m==n){
        printf("Process in Safe state : P%d-P%d-P%d-P%d-P%d",ans[0],ans[1],ans[2],ans[3],ans[4]);
    }
    else{
        printf("Process in unsafe state");
    }
}
