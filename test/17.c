#include <stdio.h>
int main()
{
    int x=2;
    int p = 1;
    int number = 0;
    int n,m;
    int a;
    int b=0;
    int c=0;
    int d;
    scanf("%d %d",&n,&m);
    
    while(number<200)
      {
    	for(a=2;a<x;a++)
	  {
	
	    if(x%a == 0)
	      {
    		p = 0;
		break;
	      }
	    if(p == 1)
	      {
     		number++;
	       	b++;
       		if(b<n)
		  {
		    c=1;
		    break;
		  }
	       	if(c=0)
		  {
	      		if(b<=m)
			  {
			    d += x;
			  }
				
		  }
		}
		x++;
		}
		
	}
	printf("%d",d);

	return 0;
}


	

	
	
	
  
