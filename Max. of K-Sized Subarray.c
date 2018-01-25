#include<stdio.h>

int MAX=1000000;

void printKMax(int arr[], int n, int k)
{
    int j, max,i;
 
    for (i = 0; i <= n-k; i++)
    {
        max = arr[i];
 
        for (j = 1; j < k; j++)
        {
            if (arr[i+j] > max)
               max = arr[i+j];
        }
        printf("%d ", max);
    }
}

int main()
{
    int a[MAX],i,sub_size,len;
    scanf("%d %d",&len,&sub_size);
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    printKMax(a,len,sub_size);
    return 0;
    
}
