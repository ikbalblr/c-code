#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
4 basamakl�  say�n�n �zel say� olup olmad���� kontrol eden program
abcd=(ab+cd)^2 
1-kullan�c�dan say�y� iste ve ata 
2-say�y� 100e b�l ab yi 100 ile modu cd yi verir .*/

int main() {
	int number ,newnumber;
	printf("4 basamakl� bir say� giriniz:");
	scanf("%d",&number);
	newnumber=number/100**number/100+number%100**number%100;
	if {
	(number==newnumber);
	printf("�zel say�dr.");
	}else{
		printf("�zle say� de�ildir.");
	}
	
	return 0;
}
