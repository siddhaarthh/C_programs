//call by refrence
void see(int *x)
{
    *x=*x-10;
    printf("increment is %d",*x);
}
void main()
{
    int a;
    printf("enter num");
    scanf("%d",&a);
    see(&a);
}
