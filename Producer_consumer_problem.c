#include<stdio.h>
void producer(int items[],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("produce produce the item %d\n",i+1);
    }
    if(i==n){
        printf("buffer is overflow\n");
        consumer(items,n);
    }
}
void consumer(int items[],int n)
{
    printf("consumer awake...\n");
    int j=0;
    for(j=n-1;j>=0;j--){
        printf("consumer consumes the item %d\n",j+1);
    }
    if(j==-1){
        printf("buffer is underflow\n");
    }
    int f;
    printf("press 1 to awake producer produce the item, else 0 to stop : ");
    scanf("%d",&f);
    if(f==1){
    producer(items,n);
    }
}
void main()
{
    int n,f;
    printf("Enter buffer size:");
    scanf("%d",&n);
    int items[n];
    printf("press 1 to awake producer produce the item, else 0 to stop : ");
    scanf("%d",&f);
    if(f==1){
    producer(items,n);
    }
}
