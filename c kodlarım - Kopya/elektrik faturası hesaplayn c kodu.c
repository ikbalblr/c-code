#include <stdio.h>
#include <stdlib.h>

/* bir elektrik da��t�m �irketi verdikleri himet kar��l���nda m��terielrden ayl�k olarak harcanan toplam kilowatt
 saat miktar�nca ve belirli bir abonelik �creti her ay ayl�k enflasyon oran�nda artmaktad�r . Buna g�re m��terinin bir aya ait �deyece�i elektrik faturas�n�n miktar�n� hesaplayan program 
 fatura miktar�=birim fiyat *harcana elektirk +abone �creti
 1-kullan�c�dan enflasyon de�erini iste ve ata
 2-kullan�c�dan eski abone �cretini iste ve ata
 3-yeni ab�ne �cretini form�lize ederek enflasyo �st�nden hesapla ve ata
 4-kullan�c�dan bir �nceki ay ve bu ay�n elektrik t�ketimini iste ve ata
 5-kullan�c�dan elektirk birim fiyat�n� iste ve ata
 6-elektrik birim fiyat�n� enflasy�na g�re tekrar hesaplat
 7-fatura hesalama form�l� ile faturay� hesapla*/
 
int main() {
	float odenecekfatura,yenibirimfiyat,eskibirimfiyat;
	float enflasyon,eskiaboneucreti,yeniaboneucreti;
	int yeniokuma,eskiokuma,toplamharcananelektrik;
	printf("enflasyon de�erini giriniz:");
	scanf("%f",&enflasyon);
	printf("eski abone ucretini giriniz:");
	scanf("%f",&eskiaboneucreti);
	yeniaboneucreti=eskiaboneucreti*(1+enflasyon/100);
	printf("bir �nceki ay elektrik t�ketim de�erini giriniz:");
	scanf("%d",&eskiokuma);
	printf("bu ay elektrik t�ketim de�erini giriniz:");
	scanf("%d",&yeniokuma);
	toplamharcananelektrik=yeniokuma-eskiokuma;
	printf("�nceki ay elektrik birim fiyat�n� giriniz:");
	scanf("%d",&eskibirimfiyat);
	yenibirimfiyat=eskibirimfiyat*(1+enflasyon/100);
	odenecekfatura=toplamharcananelektrik*yenibirimfiyat+yeniaboneucreti;
	printf("\nodenecek fatura:%f",odenecekfatura);
	
	
	
	
	return 0;
}
