#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
1-kullanacaðýmýz variablelarý belirle
2-kullanýcýdan sayýyý iste ve ata
3-first ve second formüllerii belirle
4-*/

int main() {
	int mynumber,first,second;
	printf("sayýyý giriniz:");
	scanf("%d",&mynumber);
	first=mynumber%10;
	second=(mynumber%100)/10;
	printf("girile sayýnýn onlar basamaðý:%d",second);
	printf("girile sayýnýn birler basamaðý:%d",first);
	
	return 0;
}
