#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    float number1,number2;
	char myoperator;
	printf("enter a two number:");
	scanf("%f%f",&number1,&number2);
	printf("chose operator:(+,-,/,*):");
	scanf("%c",&myoperator);
	printf("\noperator=%c\nnumber1=%f\nnumber2=%f",myoperator,number1,number2);
	switch(myoperator){
		case'+':printf("%f",number1+number2);
		break;
		case'-':printf("%f",number1-number2);
		break;
		case'/':("%f",number1/number2);
		break;
		case'*':("%f",number1*number2);
		break;
		
		
		
	}
	
	return 0;
}
