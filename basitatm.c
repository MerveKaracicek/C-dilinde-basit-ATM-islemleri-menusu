#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    printf("Basit ATM islemleri yapan program:\n");
    int islemno;
    int CekilecekTutar;
    int YatirilacakTutar;
    int bakiye= 2000;
    
    printf("1-Bakiye sorgulama:\n");
    printf("2-Para Cekme:\n");
    printf("3-Para Yatirma:\n");
    yeniden:
    printf("Islem no giriniz:");
    scanf("%d",&islemno);
    
    switch(islemno){
     case 1: 
	      printf("Bakiyeniz: %d\n",bakiye);
          break;
          
     case 2: 
          printf("Kac para cekmek istediginizi giriniz:");
          scanf("%d",&CekilecekTutar);
          if(bakiye<CekilecekTutar){
          	printf("Bakiye yetersiz.");
		  }
		  else{
		  	bakiye = bakiye-CekilecekTutar;
		  	printf("Yeni bakiyeniz:%d\n",bakiye);
		  	 }
		  	break;
		  	
	 case 3: 
	       printf("Yatirmak istediginiz miktari girin:");
	       scanf("%d",&YatirilacakTutar);
	       bakiye=bakiye+YatirilacakTutar;
	       printf("Yeni bakiyeniz: %d\n",bakiye);
	       break;
	       
     default:printf("Hatali tuslama yaptiniz.Yeniden deneyiniz.\n");
             goto yeniden;
    
    }
   
	int tuslama;
	 tekrar:
    printf("Baska islem yapmak istiyorsaniz 9'u tuslayiniz.\nCikmak icin 0'i tuslayiniz.\n");
    
    printf("Seciminiz:\n");
    scanf("%d",&tuslama);
    
        if(tuslama==9){
        goto yeniden;
		}
		else if (tuslama==0){
			printf("Cikis yaptiniz.Menumuzu kullandiginiz icin tesekkur ederiz.");
		}
	    else{
	    	printf("Hatali tuslama yaptiniz.Lutfen tekrar deneyiniz.");
	    	goto tekrar;

		}
    
    
    
	return 0;
}
