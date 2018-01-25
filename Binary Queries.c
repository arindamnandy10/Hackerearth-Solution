#include <stdio.h>
     
    void scnaf_leave_int(int *n)
    {
        register int c = getchar_unlocked();
        for( ; (c<48 || c>57); c = getchar_unlocked() );
        for( ; (c>47 && c<58); c = getchar_unlocked() );
    }
     
    void scnaf_int(int *n){
        register int c = getchar_unlocked();
        *n = 0;
        for( ; (c<48 || c>57); c = getchar_unlocked() );
        for( ; (c>47 && c<58); c = getchar_unlocked() ){
            *n = (*n<<1) + (*n<<3) +c -48;
        }
    }
     
    int main()
    {
    	int i,n,q,a;
    	scnaf_int(&n);
    	scnaf_int(&q);
        int arr[n+1];
        for(i=1; i<=n; i++)
        	scnaf_int(&arr[i]);
    	
    	while(q--){
    		scnaf_int(&a);
    		if(a==1){
    			int x;
    			scnaf_int(&x);
    				arr[x] = !arr[x]; 
    		}
    		else if(a==0){
    			int l,r;
    			scnaf_leave_int(&l);
    			scnaf_int(&r);
    			if(arr[r]==1)
    				printf("ODD\n");
    			else
    				printf("EVEN\n");
    		}
    	}
        return 0;
    }
