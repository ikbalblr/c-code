#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
4 basamaklý  sayýnýn özel sayý olup olmadýðýý kontrol eden program
abcd=(ab+cd)^2 
1-kullanýcýdan sayýyý iste ve ata 
2-sayýyý 100e böl ab yi 100 ile modu cd yi verir .*/

int main() {
	int number ,newnumber;
	printf("4 basamaklý bir sayý giriniz:");
	scanf("%d",&number);
	newnumber=number/100**number/100+number%100**number%100;
	if {
	(number==newnumber);
	printf("özel sayýdr.");
	}else{
		printf("özle sayý deðildir.");
	}
	
	return 0;
}
