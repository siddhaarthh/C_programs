//add time using structure and function
#include<stdio.h>
struct time
{
    int t_hour,t_min,t_sec;
};
void main()
{
    struct time t1,t2,t3,t4,t5;
    printf("enter time 1 in hour min sec ");
    scanf("%d%d%d",&t1.t_hour,&t1.t_min,&t1.t_sec);
    printf("\n enter time 2 in hour min sec ");
    scanf("%d%d%d",&t2.t_hour,&t2.t_min,&t2.t_sec);
    t5.t_hour=t1.t_hour+t2.t_hour;
    t4.t_min=t1.t_min+t2.t_min;
    t3.t_sec=t1.t_sec+t2.t_sec;
    if(t3.t_sec>60)
    {
        t4.t_min=t4.t_min+1;
    }
    if(t4.t_min>60)
    {
        t5.t_hour=t5.t_hour+1;
    }
    printf("\n%d\n%d\n%d",t3.t_sec,t4.t_min,t5.t_hour);
}
