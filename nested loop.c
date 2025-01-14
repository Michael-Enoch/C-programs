#include <stdio.h>

int main(){
	
	char i;
	char j;
	
	for(i = 0; i <= 5; ++i)
	{
		printf("\n");
		
		for(j = 0; j <= i; ++j){
			printf("*");
		}	
	}
}
