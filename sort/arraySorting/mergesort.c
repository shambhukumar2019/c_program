void msort(int a[],int lb,int ub)
{
    int i,j,mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        msort(a,lb,mid);    //Divide
        msort(a,mid+1,ub);  //till only 1 left
        merge(a,lb,mid,ub); //Sort and Merge
    }
}
void merge(int a[],int lb,int mid,int ub)
{
    int i,j,k,b[1000];
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++,k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++,k++;
        }
    }
    for(i=lb;i<=ub;i++)
    {
        a[i]=b[i];
    }
}
