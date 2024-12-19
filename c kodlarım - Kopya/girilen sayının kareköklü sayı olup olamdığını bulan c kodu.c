#include <stdio.h>
#include <stdlib.h>

/* girilen sayýnýn karekök olup olmadýðýný bulan sayý */
int main() {

	int number,kok;
	printf("lütfen bir sayý girinz:");
	scanf("%d",&number);
	if(number<0){
		printf("please don not this");
	}else{
		kok=sqrt(number);
		if (kok*kok==number){
			printf("koklu sayý %d bir tam sayýdýr.\n");
			printf("koklu sayý %d\n");
		}else{
			printf("tam sayý deðildir.\n");
		}	
		
		
		}
		
	{
	return 0;
}
}
