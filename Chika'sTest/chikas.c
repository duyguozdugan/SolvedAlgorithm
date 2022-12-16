#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int sayi;
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	int sonuc=1;
	int birlerbasamagi, onekler, yenisayi;

    if(sayi%49==0){
    	printf("girdiginiz sayi 7'nin katidir.");
    	sonuc=0;  
	}
	else if(sayi/10==0){
		printf("girdiginiz sayi tek basamakli bir sayidir baska bir sayi deneyiniz.");
		sonuc=0;
	}
	
	
     while((sayi/10!=0)&&(sonuc==1)){
     	birlerbasamagi=sayi%10;
	    onekler=sayi/10;
        yenisayi=onekler + (birlerbasamagi*5);  
		sayi=yenisayi;
	 }
	 
     if(sonuc==1){
     	if(sayi==7){
     		printf("girdiginiz sayi 7'nin katidir.");
		 }
		 else
		 printf("girdiginiz sayi 7'nin kati degildir.");
	 }
     	
	 
	 
	 
	

	
	
	
	
	
	
	
	
	
	
	

	return 0;
}
