#include <stdio.h>
#include <stdlib.h>

/* girilen say�n�n karek�k olup olmad���n� bulan say� */
int main() {

	int number,kok;
	printf("l�tfen bir say� girinz:");
	scanf("%d",&number);
	if(number<0){
		printf("please don not this");
	}else{
		kok=sqrt(number);
		if (kok*kok==number){
			printf("koklu say� %d bir tam say�d�r.\n");
			printf("koklu say� %d\n");
		}else{
			printf("tam say� de�ildir.\n");
		}	
		
		
		}
		
	{
	return 0;
}
}
