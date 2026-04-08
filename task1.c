#include <stdio.h>
int main() { 

 float batarya_sicakligi;
 char kapi_durumu;
 int sarj_yuzdesi; 
 int fren_pedali;
 printf("Batarya Sicakligi: ");
 scanf("%f",&batarya_sicakligi);

printf("Sarj_Yuzdesi: "); scanf("%d",&sarj_yuzdesi);
printf("kapi durumu (k:kapali a:acik): ");
scanf(" %c", &kapi_durumu);

printf("fren pedali (1=basili 0=basili degil): ");
scanf("%d", &fren_pedali);

if(batarya_sicakligi<=60 && sarj_yuzdesi>10 && kapi_durumu=='k' && fren_pedali==1)
{
 printf("\nBASARILI: SISTEM HAZIR, MOTOR BASLATILILIYOR");

}

if(batarya_sicakligi>60 && batarya_sicakligi<200)
{
printf("\nUYARI: MOTOR ASIRI SICAK, SURUS ENGELLENDI LUTFEN SOGUMASINI BEKLEYIN");

}
if(sarj_yuzdesi<=10 && sarj_yuzdesi>=0) 
{
  printf("\nUYARI: SARJ SEVIYESI KRITIK SEVIYEDE, LUTFEN SARJ EDINIZ. ");

}
if(kapi_durumu=='a') 
{
printf("\nUYARI: KAPILARI KAPATINIZ. ");

}

if(fren_pedali==0) 
{
 printf("\nUYARI: GUVENLIK ICIN FRENE BASARAK TEKRAR DENEYINIZ. ");

}
if (batarya_sicakligi < -100 || batarya_sicakligi > 200)
{
  printf("\nSicaklik sensorunde bir hata var kontrol edip tekrar deneyiniz.");
}

if(sarj_yuzdesi < 0 || sarj_yuzdesi >100)
{
  printf("\nSarj degeri yanlis algilandi, kontrol edip tekrar deneyiniz");
}

if(kapi_durumu != 'a' && kapi_durumu != 'k')
{
  printf("\nKapi sensoru mantikli calismiyor kontrol edip tekrar deneyiniz.");
}

if(fren_pedali != 0 && fren_pedali != 1)
{
  printf("\nFren pedali sensoru mantikli calismiyor kontrol edip tekrar deneyiniz.");
}

 return 0;
}    