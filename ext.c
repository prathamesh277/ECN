#include<stdio.h>
#include<stdlib.h>
#define MIN(x,y) (x>y) ? y : x
int main()
{
    int orate,cap,drop=0,x,count=0,inp[10]={0},i=0,nsec,ch;
    printf("Enter the size of the bucket\n");
    scanf("%d",&cap);
    printf("Enter output rate\n");
    scanf("%d",&orate);
    do{
        printf("enter the number of packets coming at second %d\n",i+1);
        scanf("%d",&inp[i]);
        i++;
        printf("enter the 1 to continue 0 to quit\n");
        scanf("%d",&ch);
    }
    while(ch);
    nsec=i;
    printf("\n second \t recived \t sent \t   dropped\tremained\n");
    for(i=0;count||i<nsec;i++)
    {
        printf("  %d",i+1);
        printf("  \t\t%d\t",inp[i]);
        printf("\t%d\t",MIN((inp[i]+count),orate));
        if((x=inp[i]+count-orate)>0)
        {
            if(x>cap)
            {
                count=cap;
                drop=x-cap;
            }
            else
            {
                count=x;
                drop=0;
            }
        }
        else{
            drop=0;
            count=0;
        }
        printf("\t%d\t%d\n",drop,count);
    }
    return 0;
}


-----------------------------------------------------------------------------------------------------------------------

#include<stdio.h>

int main()
{
    int w,i,f,frames[50];

    printf("Enter window size: ");
    scanf("%d",&w);
    printf("\nEnter number of frames to transmit: ");
    scanf("%d",&f);
    printf("\nEnter %d frames: ",f);
    for(i=1;i<=f;i++)
        scanf("%d",&frames[i]);
    printf("After sending %d frames at each stage sender waits for acknowledgement sent by the receiver\n\n",w);
    for(i=1;i<=f;i++)
    {
        printf("%d ",frames[i]);
        if(i%w==0)
            printf("\nAcknowledgement of above frames sent is received by sender\n\n");
    }
    if(f%w!=0)
        printf("\nAcknowledgement of above frames sent is received by sender\n");

    return 0; 
   }

-----------------------------------------------IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII-------------------------------------------


#include<stdio.h>
int main()

{

int w,i,f,frames[50];
printf("Enter window size: ");
scanf("%d",&w);
printf("\nEnter number of frames to transmit: ");
scanf("%d",&f);
printf("\nEnter %d frames: ",f);
for(i=1;i<=f;i++)
scanf("%d",&frames[i]);
printf("After sending %d frames at each stage sender waits for acknowledgement sent by the receiver\n\n",w);
for(i=1;i<=f;i++)
{
if(i%w==0)
{
printf("%d\n",frames[i]);
printf("Acknowledgement of above frames sent is received by sender\n\n");
}
else
printf("%d ",frames[i]);
}
if(f%w!=0)
printf("\nAcknowledgement of above frames sent is received by sender\n");
return 0;
}

