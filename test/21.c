#include <stdio.h>
int main()
{
    int x=2 ;
    
    int number = 0;
    int n,m;
    
    int b=0;
    int c=0;
    int d=0;
    scanf("%d %d",&n,&m);
    
    while(number<=m){
    	int p = 1;
    	int a;
    	for(a=2;a<x;a++){
	
    	if(x%a==0){
    		p=0;
    		break;
		}
	}
		if(p == 1){
			number++;
			b++;
			
			if(b>=n){
		
				if(b<=m){
					d += x;
					
				}
				
				
			}
				
		}
	
		x++;
				
		
	}
	
	printf("%d",d);

	return 0;
}


	

	
	
	
  
