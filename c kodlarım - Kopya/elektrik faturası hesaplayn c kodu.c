#include <stdio.h>
#include <stdlib.h>

/* bir elektrik daðýtým þirketi verdikleri himet karþýlýðýnda müþterielrden aylýk olarak harcanan toplam kilowatt
 saat miktarýnca ve belirli bir abonelik ücreti her ay aylýk enflasyon oranýnda artmaktadýr . Buna göre müþterinin bir aya ait ödeyeceði elektrik faturasýnýn miktarýný hesaplayan program 
 fatura miktarý=birim fiyat *harcana elektirk +abone ücreti
 1-kullanýcýdan enflasyon deðerini iste ve ata
 2-kullanýcýdan eski abone ücretini iste ve ata
 3-yeni abýne ücretini formülize ederek enflasyo üstünden hesapla ve ata
 4-kullanýcýdan bir önceki ay ve bu ayýn elektrik tüketimini iste ve ata
 5-kullanýcýdan elektirk birim fiyatýný iste ve ata
 6-elektrik birim fiyatýný enflasyýna göre tekrar hesaplat
 7-fatura hesalama formülü ile faturayý hesapla*/
 
int main() {
	float odenecekfatura,yenibirimfiyat,eskibirimfiyat;
	float enflasyon,eskiaboneucreti,yeniaboneucreti;
	int yeniokuma,eskiokuma,toplamharcananelektrik;
	printf("enflasyon deðerini giriniz:");
	scanf("%f",&enflasyon);
	printf("eski abone ucretini giriniz:");
	scanf("%f",&eskiaboneucreti);
	yeniaboneucreti=eskiaboneucreti*(1+enflasyon/100);
	printf("bir önceki ay elektrik tüketim deðerini giriniz:");
	scanf("%d",&eskiokuma);
	printf("bu ay elektrik tüketim deðerini giriniz:");
	scanf("%d",&yeniokuma);
	toplamharcananelektrik=yeniokuma-eskiokuma;
	printf("önceki ay elektrik birim fiyatýný giriniz:");
	scanf("%d",&eskibirimfiyat);
	yenibirimfiyat=eskibirimfiyat*(1+enflasyon/100);
	odenecekfatura=toplamharcananelektrik*yenibirimfiyat+yeniaboneucreti;
	printf("\nodenecek fatura:%f",odenecekfatura);
	
	
	
	
	return 0;
}
