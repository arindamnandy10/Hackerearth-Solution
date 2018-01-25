#include<stdio.h>

int main()
{
    int arr[1000000],i,len,j;
    scanf("%d",&len);
    for(i=1;i<=len;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=len;i++)
    {
        int next=0;
        for(j=i+1;j<=len;j++)
        {
            if(arr[i]<arr[j])
            {
                next=arr[j];
                break;
            }
        }
        if(next==0)
        {
            printf("%d ",arr[i]);
        }
    }
}
