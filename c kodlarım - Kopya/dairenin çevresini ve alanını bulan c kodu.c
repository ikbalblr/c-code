#include <stdio.h>
#include <stdio.h>
int main() {
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*dairenin �evresini ve alan�n� bulan  c kodu
1-ihtiyac�m�z olan variables bul ve tan�mla 
2-variables type bul
3-formulleri tan�mla
4-kullan�c�dan datalar� iste
5-i�lemleri yap
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
