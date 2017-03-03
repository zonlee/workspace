#include <stdio.h>
void isPrime(int x)
{
	int y;
	int e = 1;
	
	for(y=2;y<x;y++){
		
		if(x%y == 0){
			e = 0;
			break;
		}
	}
	return e;
		
}
int main()
{
	int a;
	int b=2;
	scanf("%d",a);
	
	if(isPrime(a)){
		printf("a=%d",a);
	}
	else{
		while(a != 1){
			if(isPrime(b)){
			a /= b;
			printf("a=%dx",b);
		}
			b++;
		}
	}
	
	return 0;
 } 
