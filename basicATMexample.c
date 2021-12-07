#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ATM örneği*/
    int para,islem, bakiye = 1000, miktar=0, hesapNumarasi;
    char devam = 'e', isim[10];
    printf("Lutfen isminizi giriniz: ");
    scanf("%s",&isim);
    while (devam == 'e')
    {
        printf("Sayin %s yapacaginiz isleme gore bir sayi giriniz... \n",isim);
        printf("1-Bakiye sorgulama \n2-Para cekme \n3-Para yatirma \n4-Para gonderme \n");
        scanf("%d",&islem);
        switch (islem)
        {
         case 1:
        
            printf("Bakiyeniz %d liradir \n", bakiye);
            break;


         case 2:
            printf("Bakiyeniz %d liradir. Kac lira cekmek istiyorsunuz? \n", bakiye);
            scanf("%d",&miktar);
            if (miktar>bakiye){
                printf("Hesabinizda bulunan miktardan daha fazla para cekmeniz mumkun degildir. Lutfen gecerli bir miktar girin\n");
            }else{
                bakiye = bakiye - miktar;
                printf("Islem basarili... \nKalan bakiyeniz %d liradir\n",bakiye);
            }
            break;
         case 3:
            printf("Bakiyeniz %d liradir. Kac lira yatirmak istiyorsunuz? \n", bakiye);
            scanf("%d",&miktar);
            bakiye = bakiye + miktar;
            printf("Islem basarili... \nBakiyeniz %d liradir\n",bakiye);
             
            break;
        
         case 4:
            printf("Para gondermek istediginiz hesabin 6 haneli hesap numarasini yazin \n");
            scanf("%d", &hesapNumarasi);
            
            if (miktar < bakiye && hesapNumarasi < 1000000 && hesapNumarasi > 99999)
            {
                printf("%d numarali hesaba gondermek istediginiz para miktarini yazin\n", hesapNumarasi);
                    scanf("%d",&miktar);
                    if (miktar>bakiye){
                      printf("Hesabinizda bulunan miktardan daha fazla para gondermeniz mumkun degildir. Lutfen gecerli bir miktar girin\n");
                    }else{
                      bakiye = bakiye - miktar;
                      printf("%d numarali hesaba para gonderme islemi basarili. Kalan bakiyeniz %d liradir\n",hesapNumarasi,bakiye);
                    }
            }else {
                printf("Gecerli bir hesap numarasi giriniz\n");
                scanf("%d",&hesapNumarasi);
            }
            
            
            break;
        
         default:
            printf("Gecersiz bir islem girdiniz\n");
            break;
        }

        printf("Baska bir islem yapmak istiyor musunuz? e/h\n");
        scanf("%s",&devam);
       
    }
    printf("Cikis yapildi!");
    
    return 0;
    //UĞUR TÜRKMEN
}
