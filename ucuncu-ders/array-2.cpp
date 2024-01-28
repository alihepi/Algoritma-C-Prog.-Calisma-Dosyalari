#include<stdio.h>
#include <string.h>
#define MAX 50

int main() {
	
	char kullanici[MAX] = "Ali happy";
	int sifre = 543675;
	
	char dizi[MAX];
	int a=0;
	
	printf("Lutfen kullanici adinizi giriniz: ");	
	gets(dizi);
	
	printf("Lutfen sifrenizi giriniz: ");
	scanf("%d", &a);
	
	//Kullanýcý girisli bir uygulama yapýlabilir
	if(strcmp(kullanici, dizi) == 0 && sifre == a){
		printf("Islem basarili");
	}else if(strcmp(kullanici, dizi) != 0 && sifre == a){
		printf("Hatali kullanici adi!!");
	}else if(strcmp(kullanici, dizi) == 0 && sifre != a){
		printf("Hatali sifre!!");
	}else{
		printf("Hatali Giris!!");
	}
		 
	return 0;
}
