#include <stdio.h>
#include <stdlib.h>

struct student
{
	int number;
	char name[10];
	char surname[15];
	int midtermgrade;
};

int main()
{
   struct student n[10];
   printf("lütfen 3 ogrencinin bilgilerini giriniz\n");
   int i;
   for(i=0;i<3;i++)
   {
   	printf("%d. ogrenci:\n ",i+1);
   	printf("ogrenci no:");
   	scanf("%d",&n[i].number );
   	
   		printf("ogrenci adi:");
   	scanf("%s",&n[i].name );
   	
   		printf("ogrenci soyadi:");
   	scanf("%s",&n[i].surname );
   	
   		printf("vize sonucu:");
   	scanf("%d",&n[i].midtermgrade  );
   }
    printf("\nGirilen Ögrencilerin Bilgileri:\n");
    for ( i = 0; i < 3; i++) {
        	printf("%d. ogrenci:\n ",i+1);
        printf("Ögrenci Numarası: %d\n", n[i].number);
        printf("Ad: %s\n", n[i].name);
        printf("Soyad: %s\n", n[i].surname);
        printf("vize sonucu: %d\n", n[i].midtermgrade);
        printf("\n");
    }
    return 0;
}
