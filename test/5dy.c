#include <stdio.h>
int ss(int x)
{
  int i;
  int ret=1;
  for(i=2;i<x;i++)
	{
	  if( x%i==0)
	    
	      ret=0;
	      break;  
	}
  return ret;
}


int main()
{
  int m;
  int o,p;
  int x;
  int tt=1; 
  scanf("%d",&m);
  printf("%d=",m);
  p=m;
  for(x=2;x<m;x++)
    {
      if(ss(x))
	{
	  if(m%x==0)
	    {
	      o=x;
	      m/=x;
	      x--;
	      if(p/m==o)
		{
		  printf("%d",o);
		}
	      else
		{
		  printf("x%d",o);
		}
	    }
	  
	}
    }
  if(x==p)
    {
      printf("%d",x);
    }
  else
    {
      printf("x%d",x);
    }
  return 0;
}
