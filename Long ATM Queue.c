
#include <stdio.h>
 
int main()
{
    int N=-1,i=0,group=1;
    scanf("%d",&N);
    int H[N];
    
    for(i=0;i<N;i++){
        scanf("%d",H+i);
        if(i>0){
            if(H[i-1]>H[i]){
            group++;
        }
        }
    }
    
    
    printf("%d\n",group);
    return 0;
}
