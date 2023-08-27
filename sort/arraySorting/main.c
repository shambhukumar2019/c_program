#include<stdio.h>
#include<stdlib.h>
void insort(int [],int);
void selsort(int [],int);
void bubsort(int [],int);
void msort(int [],int,int);
// -------IMPORTANT-------
// Only one function from above should be used at one time
int main()
{
    int size,i;
    int *arr=NULL;
    printf("enter size: ");
    scanf("%d",&size);
    arr=(int *)malloc(sizeof(int)*size);
    if(arr==NULL)
        printf("Memory not allocated");
    else
    {
        printf("Memory allocated successfully\n");
        for(i=0;i<size;i++)
        {
            printf("arr[%d]: ",i);
            scanf("%d",&arr[i]);
        }
        printf("---Unsorted Array---\x0A");
        for(i=0;i<size;i++)
            printf("%d\t",arr[i]);
    }
    msort(arr,0,size-1);
    printf("\n---Merge Sorted Array---\n");
    for(i=0;i<size;i++)
        printf("%d\t",arr[i]);
    free(arr);
    arr=NULL;
    return 0;
}
