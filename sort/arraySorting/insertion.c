void insort(int a[],int size)
{
    int key,i,j;
    for(i=1;i<size;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("\n---Insertion Sorted Array---\x0A");
    for(i=0;i<size;i++)
        printf("%d\t",a[i]);
}
