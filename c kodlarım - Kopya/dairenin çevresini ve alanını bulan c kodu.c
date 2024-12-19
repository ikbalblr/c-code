#include <stdio.h>
#include <stdio.h>
int main() {
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*dairenin çevresini ve alanýný bulan  c kodu
1-ihtiyacýmýz olan variables bul ve tanýmla 
2-variables type bul
3-formulleri tanýmla
4-kullanýcýdan datalarý iste
5-iþlemleri yap
6-return */
    float r,area ,circumference;
	const float pi=3.1415;
	printf("dairenin yaricapini giriniz:");
	scanf("%f",&r);
	circumference=2*pi*r;
	area=pi*r*r;
	printf("circumference of circle:%f\n",circumference);
	printf("area of circle:%f",area);
	
	return 0;
}
