#include<stdio.h>
void main()
{
    int n,h,temp,temp1,temp2,y;
    printf("Number of philosopher : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    printf("How many are hungry : ");
    scanf("%d",&h);
    printf("Enter philosopher : ");
    for(int j=0;j<h;j++){
        scanf("%d",&temp);
        arr[temp-1]=1;
    }
    for(int k=0;k<n-1;k++){
        temp1=k;
        temp2=k+1;
        if((arr[temp1]==1) && (arr[temp2] == 1)){
            printf("Allow one person to eat\nChoose any one\n");
            scanf("%d",&y);
            printf("accepted. %d is granted to eat, others are waiting",y);
        }
    }
}
