#include <stdio.h>
 
int main()
{
    int t,n,i;
    long int a[200000],diff,max;
    scanf("%d",&t);
    while(t--)
    {
        diff=0;max=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
        
        for(i=1;i<n;i++)
        if(a[i]>=a[i-1])
        diff+=a[i]-a[i-1];
        else
        {
            if(diff>max)
            max=diff;
            
            diff=0;
        }
        if(diff>max)
        max=diff;
        diff=0;
        
        for(i=1;i<n;i++)
        if(a[i]<=a[i-1])
        diff+=a[i-1]-a[i];
        else
        {
            if(diff>max)
            max=diff;
            
            diff=0;
        }
        if(diff>max)
        max=diff;
        
        printf("%ld\n",max);
    }
    return 0;
}
