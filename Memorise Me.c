#include <stdio.h>

int main()
{
int arr[10001]={0},n,i,x,q;
scanf("%d",&n);
i=n;
while(i--)
{
scanf("%d",&x);
arr[x]++;
}
scanf("%d",&q);
while(q--)
{
scanf("%d",&x);
if(arr[x]==0)
printf("NOT PRESENT\n");
else
printf("%d\n",arr[x]);
}

return 0;
}
