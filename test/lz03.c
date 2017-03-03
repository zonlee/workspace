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
	printf("单数是%d，双数是%d",o,i);

	
	return 0;
 } 
