#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
1-kullanaca��m�z variablelar� belirle
2-kullan�c�dan say�y� iste ve ata
3-first ve second form�llerii belirle
4-*/

int main() {
	int mynumber,first,second;
	printf("say�y� giriniz:");
	scanf("%d",&mynumber);
	first=mynumber%10;
	second=(mynumber%100)/10;
	printf("girile say�n�n onlar basama��:%d",second);
	printf("girile say�n�n birler basama��:%d",first);
	
	return 0;
}
