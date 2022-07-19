//Tower of honia
#include<stdio.h>
void move_disk(int n,char source,char distination,char temp);
void main()
{
    int n;
    printf("how many disks \n");
    scanf("%d",&n);
    move_disk(n,'S','D','T');
}
void move_disk(int n,char source,char distination,char temp)
{
    if(n>0)
    {
        move_disk(n-1,source,temp,distination);
        printf("move disk %d form %c form %c \n",n,source,distination);
        move_disk(n-1,temp,distination,source);
    }
   
}