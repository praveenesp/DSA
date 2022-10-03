#include<stdio.h>
int temp;
void quicksort(int a[100],int l,int u)
{

    int i,j,pivot;
    if(l<u)
    {
        i=l;
        j=u;
        pivot=l;
        while(i<j)
        {
        while(a[i]<=a[pivot]&&i<u)
        {
             i++;
        }
        while(a[j]>=a[pivot]&&j>l)
        {
            j--;
        }
        if(i<j)
        {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
        }
        }
        
      temp=a[j];
        a[j]=a[pivot];
        a[pivot]=temp;
        
    quicksort(a,l,j-1);
    quicksort(a,j+1,u);
      
    }
      
           
}
int main()
{
    int a[100],i,n,l,u;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0,u=n-1;
    quicksort(a,l,u);
    printf("sorted list :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}