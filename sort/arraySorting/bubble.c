void bubsort(int a[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\x0A---Bubble Sorted Array---\x0A");
    for(i=0;i<size;i++)
        printf("%d\t",a[i]);
}
