void selsort(int a[],int size)
{
    int i,j,temp,min;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("\x0A---Selection Sorted Array---\n");
    for(i=0;i<size;i++)
        printf("%d\t",a[i]);
}
