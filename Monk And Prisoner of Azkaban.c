#include <stdio.h>
 
unsigned long long a[1000001];
int x[1000001];
int y[1000001];
 
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%lli",&a[i]);
    }
    x[0] = -1;
    for(i=1;i<n;i++){
    	
    	if(a[i]<a[i-1]){
    		x[i] = i;
    	}else if(x[i-1] != -1){
    		
    		j = x[i-1]-1;
    		while(j>=0){
    			if(a[i] < a[j]){
    				x[i] = j+1;
    				break;
    			}
    			j = x[j]-1;
    		}
    		if(j<0){
    			x[i] = -1;
    		}
    	}else{
    		x[i] = -1;
    	}
    }
    
    y[n-1] = -1;
    
    for(i=n-2;i>=0;i--){
    	
    	if(a[i] <a[i+1]){
    		y[i] = i+2;
    	}else if(y[i+1] != -1){
    		j = y[i+1]-1;
    		
    		while(j>=0){
    			
    			if(a[i] <a[j]){
    				y[i] = j+1;
    				break;
    			}
    			j =  y[j] -1;
    		}
    		if(j<0){
    			y[i] = -1;
    		}
    	}else{
    		y[i] = -1;
    	}
    }
    
    for(int i=0;i<n;i++){
    	printf("%d ",x[i] + y[i]);
    }
    printf("\n");
    return 0;
}
