#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int mynumber,bolum,kalan,sum;
	sum=0;
	printf("4 basamkli bir sayi giriniz");
	scanf("%d",&mynumber);
	 //4.basamg� bulurken
	bolum=mynumber/1000;
	sum+=bolum;
	kalan=mynumber%1000;
	//3.basamg� bulurken
	bolum=kalan/100;
	sum+=bolum;
	kalan=kalan%100;
	//2.basama�� bularken
	bolum=kalan/10;
	sum+=bolum;
	kalan=kalan%10;
	//1.basama�� bulurken
	sum+=kalan;
	printf("girdiginiz sayinin rakamlari toplami =%d",sum);
	return 0;
}
