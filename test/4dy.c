#include <stdio.h>


int main()
{
  int m,n;
  int sum=0;
  scanf("%d %d",&n,&m);
  int x;
  int cnt=0;
  x=2;
  while (cnt<m)
    {
      int i;
      int is=1;
      for (i=2;i<x;i++)
	{
	  if(x%i==0)
	    {
	      is=0;
	      break;
	    }
	}
      if (is==1)
	{
	  cnt++;
	  if(cnt>=n)
	    {
	      sum+=x;
	    }
	}
      x++;
    }
      printf("%d",sum);
  return 0;
}
