#include<stdio.h>
void main()
{
    int n,BS;
    printf("enter no of block size\n");
    scanf("%d",&BS);
    int B[BS],flag[BS];
    //getting block memories
    for(int i=0;i<BS;i++){
        scanf("%d",&B[i]);
        flag[i]=0;
    }
    printf("enter no of process\n");
    scanf("%d",&n);
    int p[n],ans[n];
    //getting process memories
    for(int j=0;j<n;j++){
        scanf("%d",&p[j]);
        ans[j]=0;
    }
    //evaluating FF
    for(int k=0;k<n;k++){//iterating processes
        for(int z=0;z<BS;z++){//iterating blocks
            if(flag[z]==1){
                continue;
            }
            if(p[k]<=B[z]){
            flag[z]=1;
            ans[k]=z+1;
            break;
            }
        }
    }
    //printing answers
    printf("Process No.\t\tProcess Size\t\tBlock no.\n");
    for(int y=0;y<n;y++){
        printf("%d\t%d\t%d\n",(y+1),p[y],ans[y]);
    }
}
