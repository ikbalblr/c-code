#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	float pressure,constantR;
	int molsayisi,sicaklik,hacim;
	constantR=0.82;
	printf("mol sayisini giriniz:");
	scanf("%d",&molsayisi);
	printf("sicakligi giriniz:");
	scanf("%d",&sicaklik);
	printf("kabin hacmini girinz:");
	scanf("%d",&hacim);
	
	pressure=(molsayisi*constantR*sicaklik)/hacim;
	printf("%d hacimli kaptaki gaz basinci:%f",hacim,pressure);
	return 0;
}

