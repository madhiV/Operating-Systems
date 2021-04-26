#include<string.h>
#include<stdio.h>
void main()
{
    int c,flag=1,e,z=-1,f,index;
    char dir[100][20];
    char temp[20];
    printf("Enter name for creating dictionary\n");
    scanf("%s",temp);
    while(flag==1){
        printf("choose option:\n1.add\n2.remove\n3.display\n4.exit\n5.invalid option\n");
        scanf("%d",&e);
        switch(e){
            case 1:
                scanf("%s",temp);
                printf("successfully %s file is created\n",temp);
                z++;
                for(int q=0;q<sizeof(temp)/sizeof(temp[0]);q++){
                    dir[z][q]=temp[q];
                }
                break;
            case 2:
                f=0;
                printf("Enter file name:\n");
                scanf("%s",temp);
                for(int i=0;i<z+1;i++){
                    for(int q=0;q<sizeof(temp)/sizeof(temp[0]);q++){
                        if(dir[i][q]==temp[q]){
                            if(q==sizeof(temp)/sizeof(temp[0])-1){
                                f=1;
                                index=i;
                                printf("%s is deleted successfully\n",temp);
                            }
                            continue;
                        }
                        else 
                        {
                            break;
                        }
                    }
                }
                if(f==0){
                    printf("File not found\n");
                }
                else{
                    for(int i=index;i<z;i++){
                        strcpy(dir[i],dir[i+1]);
                    }
                    z--;
                }
                break;
            case 3:
                if(z==-1){
                    printf("No files found\n");
                }
                else{
                    printf("File are: ");
                    for(int i=0;i<z;i++){
                        printf("%s, ",dir[i]);
                    }
                    printf("%s\n",dir[z]);
                    }
                break;
            case 4:
                flag=0;
                break;
            case 5:
                printf("Invalid choice");
                break;
            default:
                printf("invalid option\n");
        }
    }
}
