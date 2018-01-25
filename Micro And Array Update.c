#include <stdio.h>

int main()
{
    int T,N,i,c=0,k,max=0;
    scanf("%d",&T);
    while(T--)
    {
        k=0,N=0,max=0;
        scanf("%d %d",&N,&k);
        int A[N];
        for(i=1;i<=N;i++)
        {
            scanf("%d ",&A[i]);
            if(A[i]<k)
            {
                c=k-A[i];
                if(c>=max)
                {
                    max=c;
                }
            }
            
        }
        printf("%d\n",max);
    }
    return 0;
}
