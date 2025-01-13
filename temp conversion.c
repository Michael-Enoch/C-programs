#include <stdio.h>
#include <ctype.h>

int main(){
	char unit;
	float temp;
	
	printf("\n Is the temperature in Farenheit or Celsius? ");
	scanf("%c", &unit);
	
	unit = toupper(unit);
	
	switch(unit){
		case 'C' :
		printf("\n Enter the temp in Celsius: ");
		scanf("%f", &temp);
		temp = (temp * 9 / 5) + 32;
		printf("The temp in Farenheit is: %.1f", temp);
		break;
		
		case 'F' :
		printf("\n Enter the temp in Farenheit: ");
		scanf("%f", &temp);
		temp = ((temp - 32 ) * 5) / 9;
		printf("The temp in Celsius is: %.1f", temp);
		break;
		
		default: 
		printf("This is not a valid unit of measurement");
	}
}
