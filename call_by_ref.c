void add(int *p, int *q, int *r)
{
    *r = (*p)+(*q);
}
void main()
{
    int x,y,z;

    printf("Enter 2 numbers :");
    scanf("%d %d",&x, &y, &z);
    add(&x,&y, &z);
    printf("%d",z);

    getch();

}
