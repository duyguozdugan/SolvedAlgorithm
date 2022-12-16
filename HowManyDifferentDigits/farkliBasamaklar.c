#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi,durum=1;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	

	if(sayi<0){
		sayi+=((-1)*(sayi))+((-1)*(sayi));
	}
	else if(sayi==0){
		printf("lutfen sifirdan farkli bir sayi giriniz.");
		durum=0;
	}
	
		
	int sayac=0,basamak,ayniMi=-1;
	while(sayi!=0){
		
		basamak=sayi%10;
		if(ayniMi!=basamak){
			sayac++;
			ayniMi=basamak;
		}
	
		sayi=sayi/10;
		
	} 
	
	
	if(durum==1){
	printf("Sayiniz %d farkli basamakli",sayac);	
	}
	
		
	
	return 0;
}
