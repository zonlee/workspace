#include <stdio.h>



int main()
{
	int a;
	int i=0;
	int o=0;
	scanf("%d",&a);
	while(a>-1)
	{
		if(a%2==0)
		{
			i++;
		}else{
			o++;
		}
	scanf("%d",&a);			
	}
	printf("������%d��˫����%d",o,i);

	
	return 0;
 } 
