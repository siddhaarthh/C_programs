#include<stdio.h>
void main()
{
    int size = 5;
    int arr[size],i;
    for(i=1;i<=size;i++){
        scanf("%d",&arr[i]);
    }
    int loc;
    int data;
    scanf("%d %d",&loc,&data);
    while(i>=loc){
        arr[i+1]=arr[i];
        i=i-1;

    }
    for(int i=1;i<=size;i++){
        printf("%d ",arr[i]);
    }

}
