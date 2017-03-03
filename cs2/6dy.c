#include <stdio.h>
int main()
{
  int dxsm[101]={0};
  int x,y;
  int m,o,p,a;
  int i=0,n=0;
  //输入第一组数，x不大于101 
  for(o=100;o>-1;o--)
    {
      scanf("%d %d",&x,&y);
      o=x;
      if(x<101)
      {
    	if(y!=0)
    	{
    		dxsm[x]+=y;
        }
	  }   
    }
     //输入第二组数，x不大于101 
   for(p=100;p>-1;p--)
    {
      scanf("%d %d",&x,&y);
      p=x;
      if(x<101)
      {
    	if(y!=0)
      	{
        dxsm[x]+=y;
      	} 
	  }    
    }  
  for(m=100;m>0;m--)                  //求最高项
    {
      if(dxsm[m]!=0)                  //本项不等于0 
      {
      	if(dxsm[m]>1)                //dxsm[m]>1,直接输出 
  		{
  			printf("%dx%d",dxsm[m],m);
  			i++; 
  			break;
	  	}
	  	else                       //dxsm[m]<1,进行判断 
	  	{
	  		if(dxsm[m]=1)          //dxsm[m]=1,输出
	  		{
	  			printf("x%d",m);      
	  			i++; 
	  			break;
		  	}
		  	else
		  	{
		  		if(dxsm[m]=-1)       //dxsm[m]=-1,输出
		  		{
		  			printf("-x%d,m");
		  			i++;
		  			break;
				  }
				  else             //dxsm[m]<-1,输出
				  {
				  	  printf("%dx%d,dxsm[m],m");
				  	  i++;
				  	  break;
				  }
		  		break;
			  }	  	 
	  	break;
	  }
        break;
      }
    }
  for(a=m-1;a>1;a--)             //求中间项
    {
      if(dxsm[a]!=0)             //判断中间项是否为0 
      {
	      	if(dxsm[a]>0)           //dxsm[a]>0,进行判断 
	      	{
				if(dxsm[a]>1)       //dxsm[m]>1,输出
		  		{
			  		printf("+%dx%d",dxsm[a],a);
			  		i++;
				}
			  	else               //dxsm[m]=1>0,输出
			  	{
			  	printf("+x%d",a);
			  	i++;
			 	}
			}
			else                 //否则dxsm[m]<0,判断 
			{
				if(dxsm[a]<-1)   //dxsm[m]<-1,输出
		  		{
			  		printf("%dx%d",dxsm[a],a);
			  		i++;
				}
				else          //否则dxsm[m]=-1,输出
				{
				  	printf("-x%d",a);
				  	i++;
				}
			}

    	}
    }
  if(dxsm[1]!=0)          //dxsm[1]=0,不输出
  {
  	if(dxsm[1]>1)        //dxsm[1]>1,输出
  	{
  		printf("+%dx",dxsm[1]);
  		i++;
	}
	else                //dxsm[1]<1,判断 
	  {
	  	if(dxsm[1]<-1)  //dxsm[1]<-1,输出 
	  	{
	  	printf("%dx",dxsm[1]);
		i++; 	
		}
		else          //dxsm[1]>=-1,判断 
		{
			if(dxsm[1]!=1)   //dxsm[1]=-1,输出 
			{
				printf("-x");
				i++; 
			}
			else             //dxsm[1]=1,输出
			{
				printf("+x");
				i++; 
			}
		}
	
	  }
 }
  if(i>0)               //前项有输出,判断 
      {
        if(dxsm[0]!=0)  //本项不等于0 
        {
        	if(dxsm[0]>0)   //本项大于0 
        	{
        		 printf("+%d",dxsm[0]);
			}
        	else         //本项小于0 
        	{
        		 printf("%d",dxsm[0]);
			}
        }
      }
  else             //前项无输出，直接输出本项 
      {
          printf("%d",dxsm[0]);
      }
  return 0;
}