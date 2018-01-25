#include<stdio.h>

int main()
{
    int A[100000],B[100000],C[100000],i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d ",&A[i]);
    }
    for(i=1;i<=N;i++)
    {
        scanf("%d ",&B[i]);
    }
    for(i=1;i<=N;i++)
    {
        C[i]=A[i]+B[i];
        printf("%d ",C[i]);
    }
   // getch();
    return 0;
}
